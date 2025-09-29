#include <stdio.h>

int main()
{
    float balance = 1000.0; // initial balance
    int choice;
    float amount;

    do
    {
        //Show Menu
        printf("\n>>>>>>> ATM MENU >>>>>>>>>\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. WithDraw Money\n");
        printf("4. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("Your Balance: %2.f\n",balance);
            break;

        case 2:
            printf("Enter amount to deposit:");
            scanf("%f",&amount);
            balance += amount;
            printf("Deposit Successful ! New Balance is :%2.f", balance);
            break;

        case 3:
            printf("Enter amount to WithDraw:");
            scanf("%f",&amount);
            if(amount > balance)
            {
               printf("Insufficient Balance !");
            }
            else{
                balance -= amount;
                printf("Withdrawal successful! New Balance: %.2f\n",balance);
                break;
            }
        case 4:
            printf("Thank you for using ATM. Goodbye!\n");
            break;

        default:
            printf("Invalid choice! Try again.\n");
        }

    }while(choice != 4);
    return 0;
}
