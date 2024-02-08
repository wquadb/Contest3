#include <iostream>
#include <string>
#include <algorithm>
#include <cstdint>

std::string common_suffix(const std::string& a, const std::string& b) 
{
    for (uint8_t i = 0; i < std::min(a.size(), b.size()); i++)
    {
        if (a[a.size() - i - 1] != b[b.size() - i - 1])
        {
            return a.substr(a.size() - i);
        }
    }
    return a.size() > b.size() ? b.substr(0) : a.substr(0);
}

int main() {
    std::string a, b;
    std::cin >> a >> b;
    std::cout << common_suffix(a, b);
    return 0;
}
