#include <iostream>
#include <fstream>
#include <map>

int parseInt(char c) {
    return c - '0';
}

int main() {
    std::map<int, int> p;
    long int n;
    char c;
    
    std::ifstream file("input.txt");
    if (!file.is_open()) {
        std::cerr << "Failed to open file.";
        return 1;
    }

    file >> n;
    file.get(c);
    
    long int i = 1;
    while (file.get(c))
    {   
        size_t j = 0;
        while ( c != ' ' && c != '\n' )
        {
            j *= 10;
            j += parseInt(c);
            file.get(c);
        }
        p[j] = i;
        i++;
    }

    file.close();
    for (i = 1; i <= n; i++)
    {
        std::cout << p[i] << " ";
    }
    return 0;
}
