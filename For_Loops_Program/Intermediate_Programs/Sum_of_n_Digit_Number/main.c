#include <stdio.h>
/*
    printing the sum of n natural numbers
*/
int main()
{
    int i, n, sum = 0;
    printf("Enter the value of n:");
    scanf("%d",&n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum of %d number is = %d",n, sum);
    return 0;
}
