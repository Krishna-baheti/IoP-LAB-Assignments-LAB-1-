/*
    Topic : Program to check whether a given number is even or odd
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/
#include<stdio.h>

int main()
{
    printf("Enter any number : ");
    int num;
    scanf("%d", &num);
    if(num % 2 == 0)
    {
        printf("EVEN Number \n");
    }
    else
    {
        printf("ODD Number \n");
    }
    return 0;
}