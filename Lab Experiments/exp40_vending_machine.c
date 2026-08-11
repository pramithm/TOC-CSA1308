#include <stdio.h>

int main() {
    float current_balance = 0.00f;
    float item_cost = 1.25f;
    int choice;

    printf("===========================================\n");
    printf("  EXP 40: Soda Vending Machine FSM\n");
    printf("  Soda Cost: $1.25\n");
    printf("===========================================\n");

    while (1) {
        printf("\nCurrent Deposited Amount: $%.2f\n", current_balance);
        printf("1. Insert $0.25 (Quarter)\n");
        printf("2. Insert $1.00 (Dollar)\n");
        printf("3. Press 'Select Soda'\n");
        printf("4. Return Coins & Exit\n");
        printf("Choose action: ");

        if (scanf("%d", &choice) != 1) break;

        if (choice == 1) {
            if (current_balance >= item_cost) {
                printf("Machine full ($1.25 reached). Cannot accept more coins.\n");
            } else {
                current_balance += 0.25f;
                printf("Inserted $0.25 -> New State: $%.2f\n", current_balance);
            }
        }
        else if (choice == 2) {
            if (current_balance >= item_cost) {
                printf("Machine full ($1.25 reached). Cannot accept more coins.\n");
            } else {
                current_balance += 1.00f;
                if (current_balance > item_cost) {
                    current_balance = item_cost;
                }
                printf("Inserted $1.00 -> New State: $%.2f\n", current_balance);
            }
        }
        else if (choice == 3) {
            if (current_balance >= item_cost) {
                printf("\n>>> SUCCESS: Soda Dispensed! Enjoy your drink. <<<\n");
                current_balance = 0.00f;
            } else {
                printf("\n>>> INSUFFICIENT FUNDS: Please insert at least $1.25 to select soda. <<<\n");
            }
        }
        else if (choice == 4) {
            if (current_balance > 0.00f) {
                printf("\nReturned $%.2f change. Thank you!\n", current_balance);
            }
            printf("Exiting Vending Machine simulator.\n");
            break;
        }
        else {
            printf("Invalid selection!\n");
        }
    }

    return 0;
}
