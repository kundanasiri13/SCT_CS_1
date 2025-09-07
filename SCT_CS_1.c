#include<stdio.h>
#include <string.h>
#include <ctype.h>

// Function to encrypt text
void caesarEncrypt(char text[], int shift) {
    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];
        
        if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';
            text[i] = (ch - base + shift) % 26 + base;
        }
    }
}
void caesarDecrypt(char text[], int shift) {
    // Decrypting is same as encrypting with -shift
    caesarEncrypt(text, -shift);
}
