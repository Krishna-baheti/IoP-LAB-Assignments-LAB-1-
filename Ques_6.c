/*
    Topic : Program to swap two variables without using third variable
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Taking input from user the two numbers and then 
    swapping them
*/

#include<stdio.h>
int main()
{
    printf("Enter two numbers (a and b) \n");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("Value of a and b before swapping are %d and %d \n",a,b);
    a = a + b; 
    b = a - b;
    a = a - b;
    printf("Value of a and b after swapping are %d and %d",a,b);
    return 0;
}