#include <stdio.h>

int main()
{
    int num, digit, original;
    int greatest = 0;
    int smallest = 9; // maximum possible digit

    printf("Enter the Number:");
    scanf("%d",&num);

    original = num;

    while(num > 0)
    {
        digit = num % 10;

        if(digit > greatest)
        {
            greatest = digit;
        }
        if(digit < smallest)
        {
            smallest = digit;
        }
        num = num / 10;
    }

    printf("The number is %d\n",original);
    printf("The greatest digit is = %d\n",greatest);
    printf("The smallest digit is = %d",smallest);

    return 0;
}
