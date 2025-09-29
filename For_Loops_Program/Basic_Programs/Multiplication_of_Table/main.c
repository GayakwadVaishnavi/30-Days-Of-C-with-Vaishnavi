#include <stdio.h>

int main()
{
    int n; //for the number from user
    printf("Enter the table no:");
    scanf("%d",&n);

    for(int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n*i);
    }
    /*for(int i = 1; i <= 10; i++)
    {
        printf("%d\n", n*i);
    }*/
    return 0;
}
