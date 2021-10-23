// dz1_3.cpp

#include <iostream>

void swap(int& a, int& b)
{
    a = a + b;
    b = b - a;
    b = -b;
    a = a - b;
}

int main()
{
    int a, b;
    std::cout << "Put a:";
    std::cin >> a;
    std::cout << "Put b:";
    std::cin >> b;
    
    swap(a, b);

    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    
    return 0;
}

