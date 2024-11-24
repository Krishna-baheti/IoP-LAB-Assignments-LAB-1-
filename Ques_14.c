/*
    Topic : Program to check whether a given character is capital letter,
    small case letter, a digit or a special symbol.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int main()
{
    printf("Enter any character \n");
    char ch;
    scanf("%c",&ch);
    if(ch >= 65 && ch <= 90)
    {
        printf("CAPITAL Case letter \n");
        return 0;
    }
    else if(ch >= 97 && ch <= 122)
    {
        printf("SMALL Case letter \n");
        return 0;
    }
    else if(ch >= 48 && ch <= 57)
    {
        printf("DIGIT \n");
        return 0;
    }
    else
    {
        printf("SPECIAL Symbol \n");
    }
return 0;
}