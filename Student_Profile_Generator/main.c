/*
   Day 1 - 30 Days of C Programming Challenge
   Topics Covered: Basic Structure, Comments, Input/Output, Variables, Data Types
   Program: Student Profile Generator
   Author: Vaishnavi Gayakwad
*/
#include <stdio.h> //standard input/output header file

int main()
{
    char name[30];  //string array of character
    int roll_no; //integer
    float percentage; //floating point number
    char grade; //character

    printf("...........Student Profile Generator............\n\n");

    //takes the student data from the user
    printf("\nEnter Your Name:");
    scanf(" %[^\n]",name);

    printf("\nEnter Your Age:");
    scanf(" %d",&roll_no);

    printf("\nEnter Your Percentage:");
    scanf(" %f",&percentage);

    printf("\nEnter Your Grade:");
    scanf(" %c",&grade);

    //output section
    printf("\n-------Student Profile------\n");
    printf("\n\nName       :%s\n", name);
    printf("Roll No    :%d\n", roll_no);
    printf("Percentage :%f\n",percentage);
    printf("Grade      :%c\n",grade);

    return 0;
}
