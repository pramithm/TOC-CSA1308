#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int valid = 1;

    printf("===========================================\n");
    printf("  EXP 7: Check CFG S -> 0 S 1 | ε (0^n 1^n)\n");
    printf("===========================================\n");
    printf("Enter a string to check: ");
    if (scanf("%s", s) != 1) return 1;

    int l = strlen(s);

    for (int i = 0; i < l; i++) {
        if (s[i] != '0' && s[i] != '1') {
            valid = 0;
            break;
        }
    }

    if (!valid) {
        printf("Result: String is Not Valid\n");
        return 0;
    }

    if (l % 2 != 0) {
        printf("The string does not satisfy the condition 0^n 1^n (length is odd)\n");
        printf("Result: String Not Accepted\n");
        return 0;
    }

    int half = l / 2;
    int first_half_0s = 1;
    int second_half_1s = 1;

    for (int i = 0; i < half; i++) {
        if (s[i] != '0') {
            first_half_0s = 0;
            break;
        }
    }

    for (int i = half; i < l; i++) {
        if (s[i] != '1') {
            second_half_1s = 0;
            break;
        }
    }

    if (first_half_0s && second_half_1s) {
        printf("The string satisfies the condition 0^n 1^n\n");
        printf("Result: String Accepted\n");
    } else {
        printf("The string does not satisfy the condition 0^n 1^n\n");
        printf("Result: String Not Accepted\n");
    }

    return 0;
}
