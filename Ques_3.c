/*
    Topic : Program to calculate Gross Salary
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int main()
{
    printf("Enter your base salary : ");
    int base;
    float hr, oa, gross;
    scanf("%d", &base);
    hr = (base*10)/100.0; // assume hr to be 10% of base salary
    oa = (base*5)/100.0; // assume oa to be 5% of base salary
    printf("\n");
    gross = base + hr + oa;
    printf("Your gross salary is : %f",gross);
    return 0;
}