#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("===========================================\n");
    printf("  EXP 37: NFA for Any Number of 'b's\n");
    printf("===========================================\n");
    printf("Enter string: ");
    if (scanf("%s", str) != 1) return 1;

    int len = strlen(str);
    int only_b = 1;

    for (int i = 0; i < len; i++) {
        if (str[i] != 'b') {
            only_b = 0;
            break;
        }
    }

    if (only_b) {
        printf("Result: Accepted (Contains only 'b's)\n");
    } else {
        printf("Result: Not Accepted\n");
    }

    return 0;
}
