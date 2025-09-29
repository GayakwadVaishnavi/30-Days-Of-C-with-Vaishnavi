#include <stdio.h>

int main()
{
    int num, digit, evenCount = 0, oddCount = 0;

    printf("Enter the Number:");
    scanf("%d",&num);

    if(num == 0)
    {
        printf("Number is neither even nor odd");
    }
    else
    {
        while(num > 0)
        {
            digit = num % 10; //take last digit
            if(digit % 2 == 0){
                evenCount++;  //increase evencount
            }
            else{
                    oddCount++; //increase oddcount
            }
            num = num / 10; //remove the last digit
        }
    }

    printf("Even Digit are: %d\n",evenCount);
    printf("Odd digit are: %d",oddCount);
    return 0;
}
