#include <stdio.h>
int main(){
    float balance = 0;
    int choice;
    float amount;
    while (1) {
        printf("\nBanking Application\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\nYour current balance is: $%.2f\n", balance);
                break;
            case 2:
                printf("\nEnter amount to deposit: $");
                scanf("%f", &amount);
                balance += amount;
                printf("\nDeposit of $%.2f successful\n", amount);
                break;
            case 3:
                printf("\nEnter amount to withdraw: $");
                scanf("%f", &amount);
                if (balance < amount) {
                    printf("\nInsufficient funds\n");
                } else {
                    balance -= amount;
                    printf("\nWithdrawal of $%.2f successful\n", amount);
                }
                break;
            case 4:
                printf("\nThank you for using the banking application\n");
                return(0);
            default:
                printf("\nInvalid choice\n");
        }
    }
    return 0;
}