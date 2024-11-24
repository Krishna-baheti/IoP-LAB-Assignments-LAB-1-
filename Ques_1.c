/*
    Topic : Program to calculate Simple Interest
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/
#include<stdio.h>

int main()
{
    printf("Enter the following : \n");
    float principal, rate, time, interest;
    printf("1) Principal Amount : ");
    scanf("%f", &principal);
    printf("\n");
    printf("2) Rate of Interest : ");
    scanf("%f", &rate);
    printf("\n");
    printf("3) Time in years : ");
    scanf("%f", &time);
    interest = (principal*rate*time)/100;
    printf("Total Simple Interest amount is : %f", interest);
    return 0;
}