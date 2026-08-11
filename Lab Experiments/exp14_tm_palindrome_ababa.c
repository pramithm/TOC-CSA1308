#include <stdio.h>
#include <string.h>

int main() {
    char tape[100];

    printf("===========================================\n");
    printf("  EXP 14: Turing Machine Palindrome (ababa)\n");
    printf("===========================================\n");
    printf("Enter string: ");
    if (scanf("%s", tape) != 1) return 1;

    int left = 0;
    int right = strlen(tape) - 1;
    int is_palindrome = 1;

    while (left < right) {
        if (tape[left] != tape[right]) {
            is_palindrome = 0;
            break;
        }
        tape[left] = 'X';
        tape[right] = 'X';
        left++;
        right--;
    }

    if (is_palindrome) {
        printf("Result: Accepted (String is a valid palindrome)\n");
    } else {
        printf("Result: Not Accepted\n");
    }

    return 0;
}
