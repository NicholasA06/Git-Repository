#include <iostream>

int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
    int a[] = {1,0,0,0};
    int b[] = {1,1,1,0,0};
    int c[] = {0,1,1,0};          

    cout << binary_to_int(a, 4) << "\n"; 
    cout << binary_to_int(b, 8) << "\n"; 
    cout << binary_to_int(c, 1) << "\n";
}
