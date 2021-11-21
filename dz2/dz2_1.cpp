// dz2_1.cpp 

#include <iostream>

int main()
{
    int x, y, z;
    int i, j, k;

    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;
    std::cout << "z = ";
    std::cin >> z;

    int*** v = new int** [x];
    for (i = 0; i < x; i++)
    {
        v[i] = new int* [y];

        for (j = 0; j < y; j++)
        {
            v[i][j] = new int[z];

            for (k = 0; k < z; k++)
            {
                v[i][j][k] = i * j * k;
            }
        }
    }

    return 0;
}

