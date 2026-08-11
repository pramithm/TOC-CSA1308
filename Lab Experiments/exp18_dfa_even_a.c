#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int state = 0;

    printf("===========================================\n");
    printf("  EXP 18: DFA for Even Number of 'a's\n");
    printf("===========================================\n");
    printf("Enter string: ");
    if (scanf("%s", str) != 1) return 1;

    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == 'a') {
            state = 1 - state;
        }
    }

    if (state == 0) {
        printf("Result: Accepted (Contains an even number of 'a's)\n");
    } else {
        printf("Result: Not Accepted (Contains an odd number of 'a's)\n");
    }

    return 0;
}
