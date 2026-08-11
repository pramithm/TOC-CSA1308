#include <stdio.h>
#include <string.h>

int main() {
    char s1[50], s2[50];

    printf("===========================================\n");
    printf("  EXP 17: Turing Machine Unary Subtraction\n");
    printf("===========================================\n");
    printf("Enter string 1 (e.g. aaa): ");
    if (scanf("%s", s1) != 1) return 1;
    printf("Enter string 2 (e.g. aa): ");
    if (scanf("%s", s2) != 1) return 1;

    int l1 = strlen(s1);
    int l2 = strlen(s2);

    if (l1 < l2) {
        printf("Result: Subtraction resulted in 0 (m < n)\n");
    } else {
        int diff = l1 - l2;
        char result[50];
        for (int i = 0; i < diff; i++) result[i] = 'a';
        result[diff] = '\0';

        printf("\n[Turing Machine Execution]\n");
        printf("Output Tape (Unary Result): %s\n", diff == 0 ? "ε (Empty Tape)" : result);
        printf("Decimal Result: %d - %d = %d\n", l1, l2, diff);
    }

    return 0;
}
