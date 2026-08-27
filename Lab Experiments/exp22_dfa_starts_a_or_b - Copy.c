#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("===========================================\n");
    printf("  EXP 22: DFA for Strings Starting with 'a' or 'b'\n");
    printf("===========================================\n");
    printf("Enter string: ");
    if (scanf("%s", str) != 1) return 1;

    int len = strlen(str);
    if (len > 0 && (str[0] == 'a' || str[0] == 'b')) {
        printf("Result: Accepted (Starts with '%c')\n", str[0]);
    } else {
        printf("Result: Not Accepted\n");
    }

    return 0;
}
