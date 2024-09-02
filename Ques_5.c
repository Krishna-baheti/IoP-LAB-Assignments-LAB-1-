/*
    Topic : Program to swap two variables using third variable
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Taking input from user the two variables a and b and
    then storing value of a in a temporary variable tem and then storing 
    value of b in a and then storing value of tem in b.
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