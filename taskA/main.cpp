#include <fstream>
#include <iostream>
#include <cctype>

void countFileContents(std::istream& inputFile, int& letters, int& words, int& lines) {
    char ch;
    bool inWord = false;
    while (inputFile.get(ch)) {
        // Count letters
        if (std::isalpha(ch)) {
            ++letters;
            if (!inWord) {
                inWord = true;
                ++words;
            }
        } else {
            inWord = false;
        }

        // Count lines
        if (ch == '\n') {
            ++lines;
        }
    }
    if (letters > 0 && lines == 0) {
        lines = 1;
    }
}

int main() {
    std::ifstream file("input.txt");

    if (!file.is_open()) {
        std::cerr << "Failed to open file.";
        return 1;
    }

    int letters = 0, words = 0, lines = 0;
    countFileContents(file, letters, words, lines);

    std::cout << "Input file contains:\n";
    std::cout << letters << " letters\n";
    std::cout << words << " words\n";
    std::cout << lines << " lines\n";

    file.close();
    return 0;
}
