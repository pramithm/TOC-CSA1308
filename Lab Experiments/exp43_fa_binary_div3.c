#include <stdio.h>
#include <string.h>

int main() {
    int trans[3][2] = {
        {0, 1},
        {2, 0},
        {1, 2}
    };

    char binary[100];
    int current_state = 0;
    int valid = 1;

    printf("===========================================\n");
    printf("  EXP 43: DFA for Binary Multiples of 3\n");
    printf("===========================================\n");
    printf("Enter a binary string (e.g. 11, 110, 1001): ");
    if (scanf("%s", binary) != 1) return 1;

    int len = strlen(binary);

    for (int i = 0; i < len; i++) {
        if (binary[i] == '0') {
            current_state = trans[current_state][0];
        } else if (binary[i] == '1') {
            current_state = trans[current_state][1];
        } else {
            valid = 0;
            break;
        }
    }

    if (!valid) {
        printf("Result: Invalid binary input!\n");
    } else {
        printf("Final DFA State: q%d (Remainder = %d)\n", current_state, current_state);
        if (current_state == 0) {
            printf("Result: ACCEPTED! (The binary number is a multiple of 3)\n");
        } else {
            printf("Result: NOT ACCEPTED! (The binary number is NOT a multiple of 3)\n");
        }
    }

    return 0;
}
