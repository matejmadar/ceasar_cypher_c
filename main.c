#include <stdio.h>
#include <ctype.h>

int main() {
    char arr[100];
    fgets(arr, sizeof(arr), stdin);

    for (int i = 0; arr[i] != '\0'; i++) {
        char c = arr[i];
        if (isalpha(c)) {
            char d = (c - 'a' - 7 + 26) % 26 + 'a';
            putchar(d);
        } else {
            putchar(c);
        }
    }
    return 0;
}
