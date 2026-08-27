#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int valid = 1;

    printf("===========================================\n");
    printf("  EXP 6: Check Grammar S -> 0 S 0 | A, A -> 1 A | ε (0^n 1^m 0^n)\n");
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

    int i = 0;
    int count1 = 0;
    while (i < l && s[i] == '0') {
        count1++;
        i++;
    }

    while (i < l && s[i] == '1') {
        i++;
    }

    int count2 = 0;
    int is_valid_structure = 1;
    while (i < l) {
        if (s[i] == '0') {
            count2++;
        } else {
            is_valid_structure = 0;
        }
        i++;
    }

    if (is_valid_structure && count1 == count2) {
        printf("The string satisfies the condition 0^n 1^m 0^n\n");
        printf("Result: String Accepted\n");
    } else {
        printf("The string does not satisfy the condition 0^n 1^m 0^n\n");
        printf("Result: String Not Accepted\n");
    }

    return 0;
}
