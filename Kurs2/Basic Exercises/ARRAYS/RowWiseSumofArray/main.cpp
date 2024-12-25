#include <array>
#include <iostream>

int main()
{
    const int rows{4};
    const int columns{3};

    int row_sum;
    std::array<int[rows], columns> numarr;
    // Intialize 4x4 arr.
    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < columns; j++)
        {
            std::cout << "\n[" << i << "][" << j << "]: ";
            std::cin >> numarr[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        row_sum = 0;
        for (int j = 0; j < columns; j++)
        {
            row_sum += numarr[i][j];
        }
        std::cout << "\nSum of row [" << i + 1 << "]: " << row_sum;
    }
}