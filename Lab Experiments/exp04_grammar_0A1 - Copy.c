#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int flag = 1;

    printf("===========================================\n");
    printf("  EXP 4: Check Grammar S -> 0 A 1\n");
    printf("===========================================\n");
    printf("Enter a string to check: ");
    if (scanf("%s", s) != 1) return 1;

    int l = strlen(s);

    for (int i = 0; i < l; i++) {
        if (s[i] != '0' && s[i] != '1') {
            flag = 0;
            break;
        }
    }

    if (!flag) {
        printf("Result: String is Not Valid (Contains non-binary symbols)\n");
    } else {
        if (l >= 2 && s[0] == '0' && s[l - 1] == '1') {
            printf("Result: String is accepted by Grammar S -> 0 A 1\n");
        } else {
            printf("Result: String is Not accepted by Grammar S -> 0 A 1\n");
        }
    }

    return 0;
}
