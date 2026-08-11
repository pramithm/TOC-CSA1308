#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int valid = 1;
    int is_palindrome = 1;

    printf("===========================================\n");
    printf("  EXP 5: Check Grammar S -> 0 S 0 | 1 S 1 | 0 | 1 | ε (Palindromes)\n");
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
    } else {
        int a = 0, b = l - 1;
        while (a < b) {
            if (s[a] != s[b]) {
                is_palindrome = 0;
                break;
            }
            a++;
            b--;
        }

        if (is_palindrome) {
            printf("The string is a palindrome.\n");
            printf("Result: String is accepted\n");
        } else {
            printf("The string is not a palindrome.\n");
            printf("Result: String is Not accepted\n");
        }
    }

    return 0;
}
