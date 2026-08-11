#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int state = 0;

    printf("===========================================\n");
    printf("  EXP 25: DFA for Even 'a's & Odd 'b's\n");
    printf("===========================================\n");
    printf("Enter string: ");
    if (scanf("%s", str) != 1) return 1;

    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        char ch = str[i];
        if (ch == 'a') {
            if (state == 0) state = 1;
            else if (state == 1) state = 0;
            else if (state == 2) state = 3;
            else if (state == 3) state = 2;
        } else if (ch == 'b') {
            if (state == 0) state = 2;
            else if (state == 1) state = 3;
            else if (state == 2) state = 0;
            else if (state == 3) state = 1;
        }
    }

    if (state == 2) {
        printf("Result: Accepted (Even number of 'a's and Odd number of 'b's)\n");
    } else {
        printf("Result: Not Accepted\n");
    }

    return 0;
}
