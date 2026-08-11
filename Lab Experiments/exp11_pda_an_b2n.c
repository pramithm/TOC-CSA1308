#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("===========================================\n");
    printf("  EXP 11: PDA for a^n b^{2n}\n");
    printf("===========================================\n");
    printf("Enter string: ");
    if (scanf("%s", str) != 1) return 1;

    int len = strlen(str);
    int i = 0;
    int count_a = 0;

    while (i < len && str[i] == 'a') {
        count_a++;
        i++;
    }

    int count_b = 0;
    while (i < len && str[i] == 'b') {
        count_b++;
        i++;
    }

    if (i == len && count_a > 0 && count_b == 2 * count_a) {
        printf("Result: Accepted (a^%d b^%d satisfies a^n b^{2n})\n", count_a, count_b);
    } else {
        printf("Result: Not Accepted\n");
    }

    return 0;
}
