// dz3_4.cpp
#include <functional>
#include <iostream>

double calculate(double x, double y, std::function<double(double, double)> f)
{
    return f(x, y);
}

int main()
{
    std::cout << calculate(1.22, 4.55, [](double x, double y) {return x + y;});
    return 0;
}