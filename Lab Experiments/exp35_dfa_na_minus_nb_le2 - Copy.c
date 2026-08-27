#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("===========================================\n");
    printf("  EXP 35: DFA for N_a(w) - N_b(w) <= 2\n");
    printf("===========================================\n");
    printf("Enter string: ");
    if (scanf("%s", str) != 1) return 1;

    int len = strlen(str);
    int count_a = 0, count_b = 0;

    for (int i = 0; i < len; i++) {
        if (str[i] == 'a') count_a++;
        else if (str[i] == 'b') count_b++;
    }

    int diff = count_a - count_b;
    printf("Count of 'a's = %d, Count of 'b's = %d, Difference = %d\n", count_a, count_b, diff);

    if (diff <= 2) {
        printf("Result: Accepted (Difference %d <= 2)\n", diff);
    } else {
        printf("Result: Not Accepted (Difference %d > 2)\n", diff);
    }

    return 0;
}
