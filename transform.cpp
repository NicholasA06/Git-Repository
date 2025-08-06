#include <iostream>

int main() {
    int num = 75;
    int rdr[32];
    int count = 0;

    while (num > 0 ) {
        rdr[count] = num % 2;
        count++;
        num = num/2;
    }

    for (int i = count-1; i >= 0; i--) {
        std::cout << rdr[i];
    }

    return 0;
}
