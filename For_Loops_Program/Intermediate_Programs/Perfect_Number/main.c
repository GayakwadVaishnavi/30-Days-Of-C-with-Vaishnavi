#include <stdio.h>
// check whether the number is perfect number or not

int main()
{
    int i, n, sum = 0;

    printf("Enter the number which do you want to check whether it is perfect number or not:");
    scanf("%d",&n);

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }
    if(n == sum){
        printf("It is Perfect Number");
    }
    else
    {
        printf("It is not perfect number");
    }
    return 0;
}
