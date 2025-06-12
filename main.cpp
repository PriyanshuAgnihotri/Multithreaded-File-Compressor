#include "compressor.h"
#include <iostream>

int main() {
    Compressor comp;
    int choice;
    std::string input, output;

    std::cout << "1. Compress\n2. Decompress\n> ";
    std::cin >> choice;
    std::cin.ignore();

    std::cout << "Input file: "; std::getline(std::cin, input);
    std::cout << "Output file: "; std::getline(std::cin, output);

    if (choice == 1)
        comp.compress(input, output);
    else
        comp.decompress(input, output);

    return 0;
}
