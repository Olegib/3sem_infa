// dz2_3.cpp 

#include <iostream>
#include <vector>

int main()
{
    int n, i, k, T;
    std::vector<int> v;

    std::cout << "Amount: ";
    std::cin >> n;

    std::cout << "Fill:" << "\n";
    for (i = 0; i < n; i++)
    {
        std::cin >> k;
        v.push_back(k);
    }

    int l = 0, r = n, m;

    std::cout << "Search for ";
    std::cin >> T;

    while (l <= r)
    {
        m = (l + r) / 2;

        if (v[m] < T)
            l = m + 1;
        else if (v[m] > T)
            r = m - 1;
        else
            break;
    }

    if (v[m] == T)
        std::cout << "success";
    else 
        std::cout << "not found";

    return 0;
}

