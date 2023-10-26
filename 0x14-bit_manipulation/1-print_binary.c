#include <stdio.h>

void print_binary_representation(unsigned int num) {
    if (num == 0) {
        printf("0"); // If the number is zero, its binary representation is just "0".
        return;
    }

    int binary[32]; // Assuming 32-bit integers
    int i = 0;

    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    for (i--; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}

int main() {
    unsigned int num = 42; // Replace with your desired number
    printf("Binary representation of %u: ", num);
    print_binary_representation(num);
    printf("\n");

    return 0;
}
