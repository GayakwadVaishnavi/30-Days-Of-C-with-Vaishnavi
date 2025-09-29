#include <stdio.h>

int main()
{
    int number, reverse = 0;
    int digit;

    printf("Enter number:");
    scanf("%d",&number);

    while(number > 0)
    {
        digit = number % 10; // 1234 % 10 = 4
        reverse = reverse * 10 + digit; // 0*10+4 = 4
        number = number / 10; // 1234 / 10 = 1234
    }
    printf("The reverse number of the %d is: %d",number, reverse);
    return 0;
}
