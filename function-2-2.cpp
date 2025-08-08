int binary_to_int(int binary_digits[], int number_of_digits) {
    int value = 0;
    for (int i = 0; i < number_of_digits; ++i) {
        if (binary_digits[i] != 0 && binary_digits[i] != 1) {
        }
        value = (value << 1) | binary_digits[i];
    }
    return value;
}
