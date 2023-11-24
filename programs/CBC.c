	#include <stdio.h>
	#include <string.h>
	void xorStrings(char *a, char *b, char *result, int len) {
		int i;
	    for (i = 0; i < len; i++) {
	        result[i] = a[i] ^ b[i];
	    }
	}
	void encryptCBC(char *plaintext, char *iv, char *key, char *ciphertext) {
	    int block_size = strlen(key),i;
	    int num_blocks = strlen(plaintext) / block_size;
	
	    for (i = 0; i < num_blocks; i++) {
	        xorStrings(plaintext + i * block_size, iv, ciphertext + i * block_size, block_size);
	        xorStrings(ciphertext + i * block_size, key, ciphertext + i * block_size, block_size);
	        iv = ciphertext + i * block_size;
	    }
	}
	void decryptCBC(char *ciphertext, char *iv, char *key, char *plaintext) {
	    int block_size = strlen(key),i;
	    int num_blocks = strlen(ciphertext) / block_size;
	
	    for (i = 0; i <num_blocks; i++) {
	        xorStrings(ciphertext + i * block_size, key, plaintext + i * block_size, block_size);
	        xorStrings(plaintext + i * block_size, iv, plaintext + i * block_size, block_size);
	        iv = plaintext+ i * block_size;
	    }
	}
	
	int main() {
	    char plaintext[] = "itsraining";
	   
	    char iv[] = "abcdefgh";  
	   
	    char key[] = "SECRETKEY";
	    
		char ciphertext[strlen(plaintext) + 1];
	    char decryptedText[strlen(plaintext) + 1];
	    
		encryptCBC(plaintext, iv, key, ciphertext);
	    printf("Encrypted Text: %s\n", ciphertext);
	
	    decryptCBC(ciphertext, iv, key, decryptedText);
	    printf("Decrypted Text: %s\n", decryptedText);
	
	    return 0;
	}
