/*
    Topic : Program to calculate area of triangle
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Taking input from user the base nad height of the triangle
    and using formula area = 1/2 * (base) * (height)
*/

#include<stdio.h>

int main()
{
    printf("Enter the base and height of the triangle : \n");
    float base, height, area;
    scanf("%f%f", &base, &height);
    area = (base*height)/2.0;
    printf("Area of triangle is : %f",area);
    printf("\n");
    return 0;
}