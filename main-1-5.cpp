#include <iostream>

void print_summed(int array1[3][3], int array2[3][3]);
int main() {
    int matrix1[3][3] = {
        {5, -2, 7},
        {0,  4, -1},
        {8,  3,  6}
    };
    int matrix2[3][3] = {
        {1,  9, -4},
        {7, -3,  2},
        {-2, 0,  5}
    };
    print_summed(matrix1, matrix2);
    return 0;
}
