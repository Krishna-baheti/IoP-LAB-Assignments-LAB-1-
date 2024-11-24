/*
    Topic : Program to swap two variables using third variable
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int main()
{
    printf("Enter two variables (a and b) : \n");
    int a, b, tem;
    scanf("%d%d", &a, &b);
    printf("Value of a and b before swapping are %d and %d \n",a,b);
    tem = a;
    a = b;
    b = tem;
    printf("Value of a and b after swapping are %d and %d \n",a,b);
}    