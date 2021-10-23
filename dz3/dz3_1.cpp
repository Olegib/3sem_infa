// dz3_1.cpp : 

#include <iostream>

int fib(int n)
{   
    if (n < 3)
        return 1;
    return fib(n - 2) + fib(n - 1);
}

int main()
{
    int n = 0;
    while (n <= 0)
    {
        std::cout << "Enter find number:\n> ";
        std::cin >> n;
    }
    std::cout << "Result: " << fib(n) << " is the " << n << " Fibonacci Number.\n";
    return 0;
}