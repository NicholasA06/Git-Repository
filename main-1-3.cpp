#include <iostream>

void count_digits(const int array[4][4]);

int main() {
    int matrix[4][4] = {
        {4,  0,  7,  22},
        {3,  9,  9,  -8},
        {10, 1,  8,   2},
        {6,  5,  0,  13}
    };

    count_digits(matrix);
}
