#include <iostream>

void printHello() 
{
    std::cout << "Hello" << std::endl;
}

/** calculate average value of x and y */
float average(float x, float y) 
{
    return (x + y) / 2;
}

int main()
{
    printHello();
    float z = average(13.5, 15.6);
    std::cout << z << std::endl;
    return 0;
}