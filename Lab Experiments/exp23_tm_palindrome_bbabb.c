#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("===========================================\n");
    printf("  EXP 23: Turing Machine Palindrome (bbabb)\n");
    printf("===========================================\n");
    printf("Enter string: ");
    if (scanf("%s", str) != 1) return 1;

    int left = 0;
    int right = strlen(str) - 1;
    int is_palindrome = 1;

    while (left < right) {
        if (str[left] != str[right]) {
            is_palindrome = 0;
            break;
        }
        left++;
        right--;
    }

    if (is_palindrome) {
        printf("Result: Accepted by Turing Machine (Valid Palindrome)\n");
    } else {
        printf("Result: Not Accepted\n");
    }

    return 0;
}
