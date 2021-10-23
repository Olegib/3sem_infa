// dz3_3.cpp

#include <iostream>
#include <algorithm>  // sort
#include <vector>

int main()
{
    std::vector<int> v = { 7, 5, 16, 8 };

    std::sort(v.begin(), v.end(), [](int a, int b) {return a < b;});
    for (auto it = v.begin(); it != v.end(); it++)
        std::cout << *it << std::endl;

    std::sort(v.begin(), v.end(), [](int a, int b) {return a > b;});
    for (auto it = v.begin(); it != v.end(); it++)
        std::cout << *it << std::endl;
}
