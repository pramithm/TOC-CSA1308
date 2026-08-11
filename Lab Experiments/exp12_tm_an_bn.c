#include <stdio.h>
#include <string.h>

int main() {
    char tape[100];

    printf("===========================================\n");
    printf("  EXP 12: Turing Machine for a^n b^n\n");
    printf("===========================================\n");
    printf("Enter string: ");
    if (scanf("%s", tape) != 1) return 1;

    int len = strlen(tape);

    while (1) {
        int found_a = 0;
        for (int i = 0; i < len; i++) {
            if (tape[i] == 'a') {
                tape[i] = 'X';
                found_a = 1;
                int found_b = 0;
                for (int j = i + 1; j < len; j++) {
                    if (tape[j] == 'b') {
                        tape[j] = 'Y';
                        found_b = 1;
                        break;
                    }
                }
                if (!found_b) {
                    printf("Result: Not Accepted (Unmatched 'a')\n");
                    return 0;
                }
                break;
            }
        }

        if (!found_a) break;
    }

    for (int i = 0; i < len; i++) {
        if (tape[i] == 'b' || tape[i] == 'a') {
            printf("Result: Not Accepted\n");
            return 0;
        }
    }

    printf("Result: Accepted by Turing Machine\n");
    return 0;
}
