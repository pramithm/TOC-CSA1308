#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int state = 0;

    printf("===========================================\n");
    printf("  EXP 19: DFA for Odd Number of 'a's\n");
    printf("===========================================\n");
    printf("Enter string: ");
    if (scanf("%s", str) != 1) return 1;

    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == 'a') {
            state = 1 - state;
        }
    }

    if (state == 1) {
        printf("Result: Accepted (Contains an odd number of 'a's)\n");
    } else {
        printf("Result: Not Accepted\n");
    }

    return 0;
}
