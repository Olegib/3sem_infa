// dz4_1.cpp 

/*
Контрольные вопросы:

1.  Можно прописывать значения по умолчанию в полях структуры;
    Можно использовать список инициализации(агрегатную инициализацию);
    Можно использовать конструкторы - специальная функция-член,
вызываемая при создании экземпляра класса/структуры;

2.  Представляют перечисления инициализаторов для каждой из переменных и констант

3.  При помощи тех или иных программных механизмов, получение некоторого
ресурса неразрывно совмещается с инициализацией, а освобождение — с
уничтожением объекта.

4.  Если ограничено место для хранения информации, можно сохранить
несколько логических (истина/ложь) переменных в одном байте.
    Некоторые интерфейсы устройств передают информацию, закодировав
биты в один байт.
    Некоторым процедурам кодирования необходимо получить доступ к
отдельным битам в байте.

5.  Переменные перечислений с областью видимости не могут неявно 
преобразовываться в целочисленные переменные и обратно.
*/

#include <iostream>

int main()
{
    enum Months
    {
        January,
        February,
        March,
        April,
        May,
        June,
        July,
        August,
        September,
        October,
        November,
        December
    };

    int year;
    int month = 0;
    int days;
    bool vis = 1;

    std::cout << "Year: ";
    std::cin >> year;
    std::cout << "\n";

    while (month < 1 || month > 12)
    {
        std::cout << "Month: ";
        std::cin >> month;
        std::cout << "\n";
    }

    if (!(year % 4)) vis = 0;

    Months m = static_cast<Months>(month - 1);

    switch (m) {
        case January:
            days = 31;
            break;
        case February:
            if (vis)
            {
                days = 28;
                break;
            }
            else
            {
                days = 29;
                break;
            }
        case March:
            days = 31;
            break;
        case April:
            days = 30;
            break;
        case May:
            days = 31;
            break;
        case June:
            days = 30;
            break;
        case July:
            days = 31;
            break;
        case August:
            days = 31;
            break;
        case September:
            days = 30;
            break;
        case October:
            days = 31;
            break;
        case November:
            days = 30;
            break;
        case December:
            days = 31;
            break;
    }

    std::cout << "The amount of days in " << month << " month is " << days;
}

