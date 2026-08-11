#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int valid = 1;

    printf("===========================================\n");
    printf("  EXP 8: Check CFG S -> A 1 0 1 A (Substring '101')\n");
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

    int found = 0;
    if (l >= 3) {
        for (int i = 0; i <= l - 3; i++) {
            if (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1') {
                found = 1;
                break;
            }
        }
    }

    if (found) {
        printf("Substring 101 exists. String accepted\n");
    } else {
        printf("Substring 101 does not exist. String not accepted\n");
    }

    return 0;
}
