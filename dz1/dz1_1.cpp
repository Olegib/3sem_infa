// dz1_1.cpp 
//задача 3

#include <iostream>;
#include <math.h>;
//Контрольные вопросы

//1
//

//2
//Логические типы (bool) принимают значения true\false
//Символьные переменные (char) хранят один из символов, набора символов ISO - 646, в который включен ASCII
//Целочисленные типы (int, signed int, unsigned int, long int, short int)
//Типы с плавающей точкой (float и double), которые выбираются исходя из необходимой точности вычислений после запятой

//3
//

//4
//

//5
//

void getabc(double &a, double &b, double &c)
{
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
}

void sol(double &a, double &b, double &c, double &x1, double &x2)
{
    x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
}


int main()
{
    double a, b, c, x1, x2;
    
    getabc(a, b, c);
    sol(a, b, c, x1, x2);
    
    std::cout << x1 << "\n";
    std::cout << x2 << "\n";
    return 0;
}

