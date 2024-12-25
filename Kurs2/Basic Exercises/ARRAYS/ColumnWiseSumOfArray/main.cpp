#include <array>
#include <iostream>

int main()
{
    const int ROWS{3};
    const int COLUMNS{3};

    int column_sum;
    std::array<int[ROWS], COLUMNS> numarr;
    // Intialize 4x4 arr.
    for (int i = 0; i < ROWS; i++)
    {

        for (int j = 0; j < COLUMNS; j++)
        {
            std::cout << "\n[" << i << "][" << j << "]: ";
            std::cin >> numarr[i][j];
        }
    }

    for (int i = 0; i < COLUMNS; i++)
    {   
        column_sum = 0;
        for (int j = 0; j < ROWS; j++)
        {
            column_sum += numarr[i][j];
        }
        std::cout << "\nSum of column [" << i + 1 << "]: " << column_sum;
    }
}