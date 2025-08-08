#include <iostream>
#include <string>

void print_binary_str(string decimal_number) {
    int num = stoi(decimal_number);

    if (num == 0) {
        std::cout << 0 << endl;
        return;
    }

    string binary = "";
    while (num > 0) {
        binary = to_string(num % 2) + binary;
        num /= 2;
    }

    std::cout << binary << std::endl;
}