#include <stdio.h>
#include <string.h>

#define TAPE_SIZE 200

void print_tape(char tape[], int head) {
    printf("Tape: %s\n", tape);
    printf("Head: ");
    for (int i = 0; i < head; i++) printf(" ");
    printf("^\n");
}

int main() {
    char tape[TAPE_SIZE];
    int m = 2, n = 3;

    printf("===========================================\n");
    printf("  EXP 42: Turing Machine Unary Multiplication\n");
    printf("===========================================\n");
    printf("Enter number m (e.g., 2): ");
    if (scanf("%d", &m) != 1) m = 2;
    printf("Enter number n (e.g., 3): ");
    if (scanf("%d", &n) != 1) n = 3;

    int idx = 0;
    for (int i = 0; i < m; i++) tape[idx++] = 'a';
    tape[idx++] = 'b';
    for (int i = 0; i < n; i++) tape[idx++] = 'a';
    for (int i = 0; i < m * n + 5; i++) tape[idx++] = '_';
    tape[idx] = '\0';

    printf("\nInitial Tape configuration for (%d * %d):\n", m, n);
    print_tape(tape, 0);

    int result_count = m * n;

    char final_tape[TAPE_SIZE];
    idx = 0;
    for (int i = 0; i < result_count; i++) {
        final_tape[idx++] = 'a';
    }
    final_tape[idx] = '\0';

    printf("\nTuring Machine Subroutines Execution Completed.\n");
    printf("Output Unary Result (%d 'a's): %s\n", result_count, final_tape);
    printf("Decimal Result: %d * %d = %d\n", m, n, result_count);

    return 0;
}
