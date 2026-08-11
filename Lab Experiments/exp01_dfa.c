#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    int trans_table[4][2] = {
        {1, 3},
        {1, 2},
        {1, 2},
        {3, 3}
    };
    
    int final_state = 2;
    int present_state = 0;
    int next_state = 0;
    int invalid = 0;
    char input_string[MAX];

    printf("===========================================\n");
    printf("  EXP 1: DFA (Starts with 'a' & Ends with 'b')\n");
    printf("===========================================\n");
    printf("Enter a string: ");
    if (scanf("%s", input_string) != 1) return 1;

    int l = strlen(input_string);
    for (int i = 0; i < l; i++) {
        if (input_string[i] == 'a') {
            next_state = trans_table[present_state][0];
        } else if (input_string[i] == 'b') {
            next_state = trans_table[present_state][1];
        } else {
            invalid = 1;
            break;
        }
        present_state = next_state;
    }

    if (invalid) {
        printf("Invalid input! Only 'a' and 'b' allowed.\n");
    } else if (present_state == final_state) {
        printf("Result: Accepted\n");
    } else {
        printf("Result: Don't Accept\n");
    }

    return 0;
}
