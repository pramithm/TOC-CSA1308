#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("===========================================\n");
    printf("  EXP 33: NFA (Starts with 'a' & Ends with 'b')\n");
    printf("===========================================\n");
    printf("Enter string: ");
    if (scanf("%s", str) != 1) return 1;

    int len = strlen(str);
    if (len >= 2 && str[0] == 'a' && str[len - 1] == 'b') {
        printf("Result: Accepted\n");
    } else {
        printf("Result: Not Accepted\n");
    }

    return 0;
}
