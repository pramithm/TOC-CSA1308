#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int state = 0;

    printf("===========================================\n");
    printf("  EXP 21: DFA for Substring 'ab'\n");
    printf("===========================================\n");
    printf("Enter string: ");
    if (scanf("%s", str) != 1) return 1;

    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        char ch = str[i];
        if (state == 0) {
            if (ch == 'a') state = 1;
        } else if (state == 1) {
            if (ch == 'a') state = 1;
            else if (ch == 'b') state = 2;
        } else if (state == 2) {
            state = 2;
        }
    }

    if (state == 2) {
        printf("Result: Accepted (Contains 'ab' as a substring)\n");
    } else {
        printf("Result: Not Accepted\n");
    }

    return 0;
}
