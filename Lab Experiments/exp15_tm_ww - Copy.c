#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("===========================================\n");
    printf("  EXP 15: Turing Machine for language w w\n");
    printf("===========================================\n");
    printf("Enter string: ");
    if (scanf("%s", str) != 1) return 1;

    int len = strlen(str);
    if (len % 2 != 0) {
        printf("Result: Not Accepted (Odd length string cannot be w w)\n");
        return 0;
    }

    int half = len / 2;
    int is_ww = 1;

    for (int i = 0; i < half; i++) {
        if (str[i] != str[half + i]) {
            is_ww = 0;
            break;
        }
    }

    if (is_ww) {
        printf("Result: Accepted (Satisfies language w w)\n");
    } else {
        printf("Result: Not Accepted\n");
    }

    return 0;
}
