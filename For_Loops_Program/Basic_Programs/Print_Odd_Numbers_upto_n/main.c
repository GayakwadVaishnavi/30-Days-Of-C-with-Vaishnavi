#include <stdio.h>
/*
    Logic : Multiply the loop counter (i) by  2 and -1 from that we get
            odd numbers
*/

int main()
{
    int i;
    printf(".......Printing first n odd numbers.........\n");
    for(i = 1; i <= 10; i++)
    {
        printf("%d\n", 2 * i - 1);
    }
    return 0;
}
