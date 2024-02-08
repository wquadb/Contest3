#include <iostream>
#include <string>

std::string ExtractDigits(const std::string& s) 
{
    std::string result = "";
    for (const char c : s) 
    {
        if (std::isdigit(c))
            result += c;
    }
    return result;
        
}
int main() {
    std::string s;
    std::getline(std::cin, s);
    std::cout << ExtractDigits(s);
    return 0;
}
