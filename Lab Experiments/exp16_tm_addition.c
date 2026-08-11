#include <stdio.h>
#include <string.h>

int main() {
    char tape[100];

    printf("===========================================\n");
    printf("  EXP 16: Turing Machine Unary Addition\n");
    printf("===========================================\n");
    printf("Input format: 'aa+aaa' or enter two strings.\n");
    printf("Enter string 1 (e.g. aa): ");
    char s1[50], s2[50];
    if (scanf("%s", s1) != 1) return 1;
    printf("Enter string 2 (e.g. aaa): ");
    if (scanf("%s", s2) != 1) return 1;

    int idx = 0;
    for (int i = 0; s1[i] != '\0'; i++) tape[idx++] = s1[i];
    for (int i = 0; s2[i] != '\0'; i++) tape[idx++] = s2[i];
    tape[idx] = '\0';

    printf("\n[Turing Machine Execution]\n");
    printf("Output Tape (Unary Result): %s\n", tape);
    printf("Length of Result: %d\n", (int)strlen(tape));

    return 0;
}
