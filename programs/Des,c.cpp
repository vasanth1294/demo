#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
const int initial_permutation[64] = {
    58, 50, 42, 34, 26, 18, 10, 2,
    60, 52, 44, 36, 28, 20, 12, 4,
    62, 54, 46, 38, 30, 22, 14, 6,
    64, 56, 48, 40, 32, 24, 16, 8,
    57, 49, 41, 33, 25, 17, 9, 1,
    59, 51, 43, 35, 27, 19, 11, 3,
    61, 53, 45, 37, 29, 21, 13, 5,
    63, 55, 47, 39, 31, 23, 15, 7
};

const uint64_t key = 0x01234ABCDEF75834;

uint64_t initial_permutation_function(uint64_t block) {
    uint64_t result = 0;
    for (int i = 0; i < 64; i++) {
        result |= ((block >> (64 - initial_permutation[i])) & 1) << (63 - i);
    }
    return result;
}

int main() {
    uint64_t plaintext = 0x0123456789ABCDEF;
    uint64_t ciphertext = initial_permutation_function(plaintext);
    printf("Plaintext: 0x%016lx\n", plaintext);
    printf("Permuted Text: 0x%016lx\n", ciphertext);
    return 0;
}

