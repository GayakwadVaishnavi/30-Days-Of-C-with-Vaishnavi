#include <stdio.h>

int main()
{
    int amount;
    float discount = 0;

    printf(".........Discount System........\n");
    printf("Enter the Amount :");
    scanf(" %d",&amount);

    if(amount >= 1000){
        discount = 20;
    }
    else if (amount >= 500){
        discount = 10;
    }
    else{
        discount = 0;
    }

    float finalprice = amount - (amount * discount / 100);

    printf("discount= %2.f\n",discount);
    printf("Final Price= %2.f\n",finalprice);
    return 0;
}
