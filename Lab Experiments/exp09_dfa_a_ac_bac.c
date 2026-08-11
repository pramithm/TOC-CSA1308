#include <stdio.h>
#include <string.h>

int simulate_dfa(const char *s) {
    int state = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        char ch = s[i];
        switch (state) {
            case 0:
                if (ch == 'a') state = 1;
                else if (ch == 'b') state = 3;
                else state = 5;
                break;
            case 1:
                if (ch == 'c') state = 2;
                else state = 5;
                break;
            case 2:
                state = 5;
                break;
            case 3:
                if (ch == 'a') state = 4;
                else state = 5;
                break;
            case 4:
                if (ch == 'c') state = 2;
                else state = 5;
                break;
            default:
                state = 5;
                break;
        }
    }
    return (state == 1 || state == 2);
}

int main() {
    printf("===========================================\n");
    printf("  EXP 9: DFA for 'a', 'ac', 'bac'\n");
    printf("===========================================\n");

    char str[100];
    printf("Enter string: ");
    if (scanf("%s", str) != 1) return 1;

    if (simulate_dfa(str)) {
        printf("Result: Accepted\n");
    } else {
        printf("Result: Not Accepted\n");
    }

    return 0;
}
