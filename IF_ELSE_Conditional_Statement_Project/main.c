/*
   Project: Conditional Statements in C
   Description: A menu-driven program that allows the user to choose
   and run different conditional statement problems like:
    - Even or Odd check
    - Positive / Negative or Zero
    - Leap Year check
    - Largest of Two Numbers
    - Vowel/ Consonant Check
   Author: vaishnavi Gayakwad
   Date: 21.09.2025
*/
#include <stdio.h>

int main()
{
    int choice, num, year, a, b;
    char ch;

    printf(".....Conditional Statements Project.....\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Positive or Negative\n");
    printf("3. Check the year is Leap year or not\n");
    printf("4. Check which is the greatest number from two integers\n");
    printf("5. Check alphabet is vowel or consonant\n");
    printf("6. Exit\n");
    printf("Enter Your Choice:");
    scanf("%d",&choice);

    switch(choice){
        //check number is even or odd
        case 1:{
            printf("Enter number:");
            scanf("%d",&num);
            if(num % 2 == 0){
                printf("Number is Even");
            }
            else{
                printf("Number is Odd");
            }
            break;
        }
        //check number is positive or negative
        case 2:{
            printf("Enter number:");
            scanf("%d",&num);
            if (num > 0){
                printf("Number is Positive");
            }
            else if (num < 0){
                printf("Number is Negative");
            }
            else{
                printf("Number is Zero");
            }
            break;
        }
        //check the year is leap year or not
        case 3 :{
            printf("Enter Year:");
            scanf("%d",&year);
            if(year % 4 == 0){
                printf("Year is Leap year");
            }
            else{
                printf("Year is not Leap year");
            }
            break;
        }
        //check the greatest number from the two numbers
         case 4 :{
            printf("Enter two number:");
            scanf("%d%d",&a, &b);
            if(a > b){
                printf("%d is greater",a);
            }
            else{
                printf("%d is greater",b);
            }
            break;
        }
        //check the alphabet is vowel or consonant
           case 5 :{
            printf("Enter any alphabet:");
            scanf(" %c",&ch);
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
                printf("Vowel");
            }
            else{
                printf("Consonant");
            }
            break;
        }
    }
    return 0;
}
