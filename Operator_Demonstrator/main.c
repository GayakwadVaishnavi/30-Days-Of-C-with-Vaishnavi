/*
    Mini Project - Operator Demonstrator
    Author: Vaishnavi Gayakwad
    Purpose: Demonstrates all major operators in C
*/
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter Two Integers :\n");
    scanf("%d%d",&a,&b);

    printf("...........Arithmetic Operators...........\n");
    printf("Addition of a + b = %d\n", a + b);
    printf("Subtraction of a - b = %d\n", a - b);
    printf("Multiplication of a * b = %d\n", a * b);
    printf("Division of a / b = %d\n", a / b);
    printf("Modulus of a % b = %d\n", a % b);

    printf("...........Relational Operators...........\n");
    printf("a == b =%d\n", a == b);
    printf("a != b =%d\n", a != b);
    printf("a > b =%d\n", a > b);
    printf("a < b =%d\n", a < b);
    printf("a >= b =%d\n", a >= b);
    printf("a <= b =%d\n", a <= b);

    printf("...........Logical Operators...........\n");
    printf("a && b =%d\n", a && b);
    printf("a || b =%d\n", a || b);
    printf("!a =%d\n", !a);

    printf("...........Assignment Operators...........\n");
    int x = a;
    printf("x = %d\n", x);
    printf("x = %d\n", x += b);
    printf("x = %d\n", x -= b);
    printf("x = %d\n", x *= b);
    printf("x = %d\n", x /= b);
    printf("x = %d\n", x %= b);

    printf("...........Conditional Operator(Ternary Operator)...........\n");
    int max = (a > b) ? a : b;
    printf("Max of a and b is = %d\n", max);

    printf("...........Increment/Decrement Operator...........\n");
    int y = a;
    printf(" y = %d\n", y);
    printf("++y = %d\n", ++y); //Pre-Increment
    printf("y++ = %d\n", y++); //Post-Increment
    printf("--y = %d\n", --y); //Pre-Decrement
    printf("y-- = %d\n", y--); //post-Decrement
    printf("Final Y =%d\n", y);

    printf("...........Special Operators...........\n");
    printf("size of(a) = %lu bytes\n", sizeof(a));
    printf("Address of a (&a) = %p\n", (void *)&a);
    return 0;
}
