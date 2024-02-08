#include <iostream>
#include <vector> 
#include <string> 
#include <cstdint> 

std::vector<std::string> split(std::string stream, char delimiter) 
{
    std::string token = "";
    std::vector<std::string> result = {};
    for (size_t i = 0; i < stream.length(); i++) 
    {
        if (stream[i] == delimiter )
        {
            result.push_back(token);
            token = "";
        }
        else
        {
            token += stream[i];
        }
        
        if (i == stream.length() - 1)
        {
            result.push_back(token);
        }
    }
    return result;
}

int main() {
    char delimeter;
    std::string stream;
    std::vector<std::string> tokens = {};
    
    std::cin >> stream;
    std::cin >> delimeter;

    tokens = split(stream, delimeter);

    for (std::string token : tokens ) {
        std::cout << token << std::endl;
    }

    return 0;
}
