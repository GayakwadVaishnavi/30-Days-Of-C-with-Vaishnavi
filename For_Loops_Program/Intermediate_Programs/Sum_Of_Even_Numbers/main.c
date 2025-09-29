#include <stdio.h>

int main()
{
    int sum = 0;
    int i, n;

    printf("Enter the number:");
    scanf("%d",&n);

    for(i = 0; i <= n; i++)
    {
        sum = sum + (2 * i);
    }
    printf("The sum of %d even number is = %d",n,sum);
    return 0;
}
