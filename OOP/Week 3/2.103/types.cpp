#include <iostream>

int main() {
    char c = 0;
    std::cout << "char: " << sizeof(c) << std::endl;

    signed int i = 1;
    std::cout << "int: " << sizeof(i) << std::endl;

    float f = 0.0f;
    std::cout << "float: " << sizeof(f) << std::endl;

    long double d = 0.0;
    std::cout << "ld: " << sizeof(d) << std::endl;
}