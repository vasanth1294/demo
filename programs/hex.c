#include <stdio.h>

void stringToHex(const char *input) {
    while (*input) {
        printf("%02X ", (unsigned char)*input);
        input++;
    }
    printf("\n");
}

int main() {
    const char *str = "Hello, World!";
    
    printf("Hexadecimal equivalent of the string:\n");
    stringToHex(str);

    return 0;
}

