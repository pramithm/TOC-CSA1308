#include <stdio.h>
#include <string.h>

const char* state_names[] = {
    "S0: System Off",
    "S1: Welcome / Idle",
    "S2: Check PIN",
    "S3: Input Withdraw Amount",
    "S4: Verify Balance",
    "S5: Verify Bills Availability",
    "S6: Disburse Bills",
    "S7: Eject Card"
};

int main() {
    int current_state = 1;
    int user_pin = 1234;
    int input_pin;
    int balance = 5000;
    int atm_cash = 10000;
    int withdraw_amt = 0;
    int choice;

    printf("===========================================\n");
    printf("  EXP 38: ATM System Finite State Machine\n");
    printf("===========================================\n");

    while (1) {
        printf("\nCurrent State: [%s]\n", state_names[current_state]);

        if (current_state == 1) {
            printf("1. Insert Card\n2. Exit System\nSelect Event: ");
            if (scanf("%d", &choice) != 1) break;
            if (choice == 1) {
                printf("[e1: Insert Card] -> Transition to S2 (Check PIN)\n");
                current_state = 2;
            } else {
                printf("[e0: Stop System] -> Transition to S0\n");
                break;
            }
        }
        else if (current_state == 2) {
            printf("Enter 4-digit PIN (Default: 1234, or enter 0 to Cancel): ");
            if (scanf("%d", &input_pin) != 1) break;
            if (input_pin == 0) {
                printf("[e6: Cancel Transaction] -> Transition to S7 (Eject Card)\n");
                current_state = 7;
            } else if (input_pin == user_pin) {
                printf("[e2: Correct PIN] -> Transition to S3 (Input Withdraw Amount)\n");
                current_state = 3;
            } else {
                printf("[e3: Incorrect PIN] -> Retry PIN check in S2\n");
            }
        }
        else if (current_state == 3) {
            printf("Enter Withdrawal Amount (Max per transaction = 2000, 0 to Cancel): ");
            if (scanf("%d", &withdraw_amt) != 1) break;
            if (withdraw_amt == 0) {
                printf("[e6: Cancel Transaction] -> Transition to S7 (Eject Card)\n");
                current_state = 7;
            } else if (withdraw_amt <= 2000) {
                printf("[e4: Request <= Max] -> Transition to S4 (Verify Balance)\n");
                current_state = 4;
            } else {
                printf("[e5: Request > Max] -> Limit exceeded! Try again in S3\n");
            }
        }
        else if (current_state == 4) {
            printf("Checking account balance ($%d)...\n", balance);
            if (withdraw_amt <= balance) {
                printf("[e7: Sufficient Funds] -> Transition to S5 (Verify Bills Availability)\n");
                current_state = 5;
            } else {
                printf("[e8: Insufficient Funds] -> Transition to S7 (Eject Card)\n");
                current_state = 7;
            }
        }
        else if (current_state == 5) {
            printf("Checking ATM cash availability ($%d)...\n", atm_cash);
            if (withdraw_amt <= atm_cash) {
                printf("[e9: Sufficient Bills in ATM] -> Transition to S6 (Disburse Bills)\n");
                current_state = 6;
            } else {
                printf("[e10: Insufficient Bills in ATM] -> Transition to S7 (Eject Card)\n");
                current_state = 7;
            }
        }
        else if (current_state == 6) {
            balance -= withdraw_amt;
            atm_cash -= withdraw_amt;
            printf(">>> Cash Disbursed: $%d. Remaining Account Balance: $%d <<<\n", withdraw_amt, balance);
            printf("Transition to S7 (Eject Card)\n");
            current_state = 7;
        }
        else if (current_state == 7) {
            printf(">>> Please collect your card. Thank you! <<<\n");
            printf("Transition to S1 (Welcome)\n");
            current_state = 1;
        }
    }

    return 0;
}
