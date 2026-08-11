#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];

    printf("===========================================\n");
    printf("  EXP 29: TM String Comparison (aba aba)\n");
    printf("===========================================\n");
    printf("Enter string 1 (e.g. aba): ");
    if (scanf("%s", str1) != 1) return 1;
    printf("Enter string 2 (e.g. aba): ");
    if (scanf("%s", str2) != 1) return 1;

    printf("\n[Turing Machine Head Trace]\n");
    if (strcmp(str1, str2) == 0) {
        printf("Result: Strings MATCH! Accepted by Turing Machine.\n");
    } else {
        printf("Result: Strings DO NOT MATCH! Rejected.\n");
    }

    return 0;
}
