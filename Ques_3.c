/*
    Topic : Program to calculate Gross Salary
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Taking input from user the Basic salary and then 
    calculating home rent allowances(HR is 10% of basic salary) 
    and Other allowances(OA is 5% of basic salary) to get gross salary
*/

#include<stdio.h>

int main()
{
    printf("Enter your basic salary : ");
    int basic;
    float hr, oa, gross;
    scanf("%d", &basic);
    hr = (basic*10)/100.0;
    oa = (basic*5)/100.0;
    printf("\n");
    gross = basic + hr + oa;
    printf("Your gross salary is : %f",gross);
    return 0;
}