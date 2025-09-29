#include <stdio.h>
/* Factorial of a Number */

int main()
{
    int n, fact = 1;
    int i;

    printf("Enter any number:");
    scanf("%d",&n);

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d = %d",n, fact);
    return 0;
}
