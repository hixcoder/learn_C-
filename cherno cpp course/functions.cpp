#include <iostream>

int Multiply(int a, int b)
{
    return a * b;
}

void MutiplyAndLog(int a, int b)
{
    std::cout << a << " * " << b << " = " << Multiply(a, b)<< std::endl;
}

int main()
{
    int a = 8;
    int b = 4;

    std::cout << "hello man" << std::endl;
    std::cout << a << " * " << b << " = " << Multiply(a, b)<< std::endl;
    MutiplyAndLog(5, 6);
}