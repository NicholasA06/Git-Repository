#include <iostream>

void add_binary(const int binary1[], const int binary2[], int final[]) {
    int carry = 0;

    for (int i = 11; i >=0; --i) {
        int total = binary1[i] + binary2[i] + carry;
        final[i] = total % 2;
        carry = total / 2;
    }

        if (carry > 0) {
        std::cout << "Exceeds limit" << std::endl;
    }
}

int decimal(int final[]) {
    int decimal = 0;
    for (int i = 0; i < 12; ++i) {
        decimal = decimal * 2 + final[i];
    }
    return decimal;
}

int main() {

    std::cout << 0b000000000011 + 0b111011101011 << std::endl;

    int binary1[] = {1,1,1,0,1,1,1,0,1,0,1,1};    
    int binary2[] = {0,0,0,0,0,0,0,0,0,0,1,1};    
    int final[16] = {0};                          

    add_binary(binary1, binary2, final);

    return 0;
}
