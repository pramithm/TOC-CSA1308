#include <stdio.h>
#include <string.h>

int simulate_dfa(const char *s) {
    if (strcmp(s, "bc") == 0 || strcmp(s, "c") == 0 || strcmp(s, "bcaaa") == 0) {
        return 1;
    }
    return 0;
}

int main() {
    char str[100];

    printf("===========================================\n");
    printf("  EXP 26: DFA for 'bc', 'c', 'bcaaa'\n");
    printf("===========================================\n");
    printf("Enter string: ");
    if (scanf("%s", str) != 1) return 1;

    if (simulate_dfa(str)) {
        printf("Result: Accepted\n");
    } else {
        printf("Result: Not Accepted\n");
    }

    return 0;
}
