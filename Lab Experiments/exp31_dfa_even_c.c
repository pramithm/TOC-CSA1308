#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int state = 0;

    printf("===========================================\n");
    printf("  EXP 31: DFA for Even Number of 'c's\n");
    printf("===========================================\n");
    printf("Enter string: ");
    if (scanf("%s", str) != 1) return 1;

    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == 'c') {
            state = 1 - state;
        }
    }

    if (state == 0) {
        printf("Result: Accepted (Contains even number of 'c's)\n");
    } else {
        printf("Result: Not Accepted\n");
    }

    return 0;
}
