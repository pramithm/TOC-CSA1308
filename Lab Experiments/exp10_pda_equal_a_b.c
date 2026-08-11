#include <stdio.h>
#include <string.h>

#define MAX_STACK 100

int main() {
    char stack[MAX_STACK];
    int top = -1;
    char str[100];

    printf("===========================================\n");
    printf("  EXP 10: PDA for N_a(w) = N_b(w)\n");
    printf("===========================================\n");
    printf("Enter a string over {a, b}: ");
    if (scanf("%s", str) != 1) return 1;

    int len = strlen(str);
    int valid = 1;

    for (int i = 0; i < len; i++) {
        char ch = str[i];
        if (ch != 'a' && ch != 'b') {
            valid = 0;
            break;
        }

        if (top == -1) {
            stack[++top] = ch;
        } else if (stack[top] != ch) {
            top--;
        } else {
            stack[++top] = ch;
        }
    }

    if (!valid) {
        printf("Result: Invalid characters in string.\n");
    } else if (top == -1) {
        printf("Result: Accepted (Number of a's == Number of b's)\n");
    } else {
        printf("Result: Not Accepted (Number of a's != Number of b's)\n");
    }

    return 0;
}
