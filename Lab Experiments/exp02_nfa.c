#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STATES 10
#define MAX_SYMBOLS 10
#define MAX_TRANS 10

int main() {
    int mat[MAX_STATES][MAX_SYMBOLS][MAX_TRANS];
    int num_states, num_symbols, num_final;
    int symbol[MAX_SYMBOLS];
    int final_state[MAX_STATES];
    int present_state[MAX_STATES], next_state[MAX_STATES];
    char input[100];
    int prev_trans, new_trans;
    int flag;

    printf("===========================================\n");
    printf("  EXP 2: NFA Simulation\n");
    printf("===========================================\n");

    for (int i = 0; i < MAX_STATES; i++) {
        for (int j = 0; j < MAX_SYMBOLS; j++) {
            for (int k = 0; k < MAX_TRANS; k++) {
                mat[i][j][k] = -1;
            }
        }
    }

    num_states = 4;
    num_symbols = 2;
    symbol[0] = 0;
    symbol[1] = 1;
    
    mat[0][0][0] = 1;
    mat[0][1][0] = 3;

    mat[1][0][0] = 1;
    mat[1][0][1] = 2;
    mat[1][1][0] = 1;

    mat[3][0][0] = 3;
    mat[3][1][0] = 3;
    mat[3][1][1] = 2;

    num_final = 1;
    final_state[0] = 2;

    printf("NFA configured for language: Strings over {0,1} that start and end with the same symbol.\n");
    printf("Enter the input string (e.g. 011010, 1001, 010): ");
    if (scanf("%s", input) != 1) return 1;

    int l = strlen(input);
    present_state[0] = 0;
    prev_trans = 1;

    for (int i = 0; i < l; i++) {
        int inp1;
        if (input[i] == '0') inp1 = 0;
        else if (input[i] == '1') inp1 = 1;
        else {
            printf("Invalid input!\n");
            return 0;
        }

        new_trans = 0;
        for (int j = 0; j < prev_trans; j++) {
            int p = present_state[j];
            int k = 0;
            while (mat[p][inp1][k] != -1) {
                next_state[new_trans++] = mat[p][inp1][k];
                k++;
            }
        }

        for (int j = 0; j < new_trans; j++) {
            present_state[j] = next_state[j];
        }
        prev_trans = new_trans;
    }

    flag = 0;
    for (int i = 0; i < prev_trans; i++) {
        for (int j = 0; j < num_final; j++) {
            if (present_state[i] == final_state[j]) {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 1) {
        printf("Result: Accepted\n");
    } else {
        printf("Result: Not Accepted\n");
    }

    return 0;
}
