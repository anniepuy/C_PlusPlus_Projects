#include <iostream>

int main()
{
    std::cout << "The size of an integer:\t\t";
    std::cout << sizeof(int) << " bytes\n";

    std::cout << "The size of a short integer:\t";
    std::cout << sizeof(short) << " bytes\n";

    std::cout << "The size of a long integer:\t";
    std::cout << sizeof(long) << " bytes\n";

    std::cout << "The size of a character:\t";
    std::cout << sizeof(char) << " bytes\n"

    std::cout << "The size of a boolean:\t";
    std::cout << sizeof(bool) << " bytes\n";
}