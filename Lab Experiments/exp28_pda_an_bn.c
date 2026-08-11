#include <stdio.h>
#include <string.h>

int main() {
    char stack[100];
    int top = -1;
    char str[100];

    printf("===========================================\n");
    printf("  EXP 28: PDA for a^n b^n\n");
    printf("===========================================\n");
    printf("Enter string: ");
    if (scanf("%s", str) != 1) return 1;

    int len = strlen(str);
    int i = 0;

    while (i < len && str[i] == 'a') {
        stack[++top] = 'a';
        i++;
    }

    if (top == -1) {
        printf("Result: Not Accepted (No 'a' found)\n");
        return 0;
    }

    while (i < len && str[i] == 'b') {
        if (top >= 0) {
            top--;
        } else {
            printf("Result: Not Accepted (More 'b's than 'a's)\n");
            return 0;
        }
        i++;
    }

    if (i == len && top == -1) {
        printf("Result: Accepted by PDA (Stack is empty)\n");
    } else {
        printf("Result: Not Accepted\n");
    }

    return 0;
}
