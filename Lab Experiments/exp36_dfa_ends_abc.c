#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("===========================================\n");
    printf("  EXP 36: DFA for Strings Ending with 'abc'\n");
    printf("===========================================\n");
    printf("Enter string: ");
    if (scanf("%s", str) != 1) return 1;

    int len = strlen(str);
    if (len >= 3 && str[len - 3] == 'a' && str[len - 2] == 'b' && str[len - 1] == 'c') {
        printf("Result: Accepted (Ends with 'abc')\n");
    } else {
        printf("Result: Not Accepted\n");
    }

    return 0;
}
