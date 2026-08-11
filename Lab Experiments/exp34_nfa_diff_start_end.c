#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("===========================================\n");
    printf("  EXP 34: NFA (Different Start & End Symbols)\n");
    printf("===========================================\n");
    printf("Enter string: ");
    if (scanf("%s", str) != 1) return 1;

    int len = strlen(str);
    if (len >= 2 && str[0] != str[len - 1]) {
        printf("Result: Accepted (Starts with '%c' and ends with '%c')\n", str[0], str[len - 1]);
    } else {
        printf("Result: Not Accepted\n");
    }

    return 0;
}
