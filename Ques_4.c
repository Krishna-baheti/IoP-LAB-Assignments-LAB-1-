/*
    Topic : Program to convert temperature from Fahrenheit to Centigrade
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int main()
{
    printf("Enter the temperature in Fahrenheit : ");
    float fah,cent;
    scanf("%f", &fah);
    cent = (fah - 32)*5/9; // using  C = (F - 32) * 5/9
    printf("Temperature in centigrade is : %f", cent);
    printf("\n");
    return 0;
}