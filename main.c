#include <stdio.h>
#include <ctype.h>

int main() {
    char arr[100];
    fgets(arr, sizeof(arr), stdin);

    for (int i = 0; arr[i] != '\0'; i++) {
        char c = arr[i];
        if (isalpha(c)) {
            int d = ((int)c - 'A' + 7 + 26) % 26 + 'A';
            arr[i] = (char)d;
        } else {
            arr[i] = c;
        }
    }
    //uwu
    printf("%s", arr);
    return 0;
}
