/*
    Topic : Program to calculate ASCII value of a character
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Taking input from user any arbitrary character and then
    printing its ASCII value
*/

#include<stdio.h>

int main()
{
    printf("Enter the character : ");
    char c;
    scanf("%c", &c);
    printf("ASCII value of %c is : %d",c,c);
    return 0;
}