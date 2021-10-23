﻿// dz5.cpp 

/*
Контрольные вопросы:

1.  Инкапсуляция - разделение свойств и методов (атрибутов) на те свойства и
методы, которые могут быть использованы только внутри класса
(приватные/private) и которые могут быть использованы как внутри класса,
так и снаружи (публичные/public)
    Полиморфизм - разные реализации кода при общем интерфейса. Пример:
перегрузка функций. В С++ реализован Ad-hoc-полиморфизм
(специализированный полиморфизм)
    Наследование - передача общий свойств и методов от родителя к потомкам

2.  детализация проектных классов,
    уточнение операций и атрибутов,
    моделирование состояний для классов,
    уточнение связей между классами

3.  Появляется возможность менять реализацию, сохраняя интерфейс

4.  Внешнее связывание означает, что переменные и функции после компоновки 
текущего файла будут доступны во всех файлах программы, а внутреннее связывание 
говорит о том, что объекты будут видны только внутри текущего файла.

5.  Члены именованного пространства имен могут определяться за его границами,
если они объявлены путем явной квалификации определяемого пространства имен
*/


#include "energy.cpp"

int main()
{
    Energy e;
    double j;

    std::cout << "Write the amount of Jouls: ";
    std::cin >> j;
    std::cout << "\n";

    e.fJvErg(j);
    e.fPrint();

    return 0;
}