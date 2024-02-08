#include <iostream>
#include <vector> 
#include <string> 
#include <cstdint> 

std::string join(const std::vector<std::string>& tokens, char delimiter) {
    std::string result = "";
    for (size_t i = 0; i < tokens.size(); i++) {
        result += tokens[i];
        if (i != tokens.size() - 1)
            result += delimiter;
    }
    return result;
}

int main() {
    int n;
    char delimeter;
    std::vector<std::string> tokens = {};
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::string m;
        std::cin >> m;
        tokens.push_back(m);
    }
    std::cin >> delimeter;
    std::cout << join(tokens, delimeter) << std::endl;
    return 0;
}
