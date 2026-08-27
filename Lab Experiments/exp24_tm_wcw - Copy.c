#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("===========================================\n");
    printf("  EXP 24: Turing Machine for language w c w\n");
    printf("===========================================\n");
    printf("Enter string: ");
    if (scanf("%s", str) != 1) return 1;

    int len = strlen(str);
    int c_index = -1;

    for (int i = 0; i < len; i++) {
        if (str[i] == 'c') {
            c_index = i;
            break;
        }
    }

    if (c_index == -1) {
        printf("Result: Not Accepted (Separator 'c' missing)\n");
        return 0;
    }

    int len1 = c_index;
    int len2 = len - 1 - c_index;

    if (len1 != len2) {
        printf("Result: Not Accepted (Length of w before 'c' != Length of w after 'c')\n");
        return 0;
    }

    int match = 1;
    for (int i = 0; i < len1; i++) {
        if (str[i] != str[c_index + 1 + i]) {
            match = 0;
            break;
        }
    }

    if (match) {
        printf("Result: Accepted by Turing Machine (Satisfies w c w)\n");
    } else {
        printf("Result: Not Accepted\n");
    }

    return 0;
}
