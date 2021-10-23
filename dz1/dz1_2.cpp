// dz1_2.cpp 
//Задание 2
#include <iostream>

const float Cf = 100000;
const float Ce = 10000000;
const float Cq = 3000000000;

double Force(double x)
{
    return x * Cf;
}

double Energy(double x)
{
    return x * Ce;
}

double Zaryad(double x)
{
    return x * Cq;
}

int main()
{
    int input;
    double x;

    std::cout << "1. Newton in Din\n";
    std::cout << "2. Djouli v Erg\n";
    std::cout << "3. Kulon v SGSE\n";
    std::cout << "4. Exit\n";
    std::cout << "Choice: ";
    std::cin >> input;
    switch (input) {
    case 1:
        std::cout << "Newtons:\n";
        std::cin >> x;
        std::cout << Force(x);
        break;
    case 2:
        std::cout << "Djouli:\n";
        std::cin >> x;
        std::cout << Energy(x);
        break;
    case 3:
        std::cout << "Kulons:\n";
        std::cin >> x;
        std::cout << Zaryad(x);
        break;
    case 4:
        
        break;
    default:
        std::cout << "Error.\n";
        break;
        }
    return 0;
}

