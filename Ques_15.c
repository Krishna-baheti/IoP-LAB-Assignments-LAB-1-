/*
    Topic : Program to read marks and print division
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/
#include<stdio.h>

int main()
{
    printf("Enter the marks in 5 subjects (out of 20) \n");
    float a,b,c,d,e,sum;
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    sum = a+b+c+d+e;
    if(sum <= 100 && sum >= 90)
    {
        printf("Grade : A \n");
    }
    else if(sum < 90 && sum >= 80)
    {
        printf("Grade : B \n");
    }
    else if(sum < 80 && sum >= 70)
    {
        printf("Grade : C \n");
    }
    else
    {
        printf("Below Distinction \n");
    }
    return 0;
}