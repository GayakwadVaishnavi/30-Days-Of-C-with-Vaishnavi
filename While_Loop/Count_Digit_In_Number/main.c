#include <stdio.h>

int main()
{
    int number, count = 0;
    int original;

    printf("Enter the Number:");
    scanf("%d",&number);

    original = number;

    if(number == 0)
    {
        count = 1;
    }
    else
    {
        while(number > 0)
        {
            number = number / 10;
            count++;
        }
    }
    printf("The number is %d\n",original);
    printf("The count is = %d",count);
    return 0;
}
