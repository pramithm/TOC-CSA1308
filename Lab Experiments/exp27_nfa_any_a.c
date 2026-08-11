#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("===========================================\n");
    printf("  EXP 27: NFA for Any Number of 'a's\n");
    printf("===========================================\n");
    printf("Enter string: ");
    if (scanf("%s", str) != 1) return 1;

    int len = strlen(str);
    int only_a = 1;
    for (int i = 0; i < len; i++) {
        if (str[i] != 'a') {
            only_a = 0;
            break;
        }
    }

    if (only_a) {
        printf("Result: Accepted (Contains only 'a's)\n");
    } else {
        printf("Result: Not Accepted\n");
    }

    return 0;
}
