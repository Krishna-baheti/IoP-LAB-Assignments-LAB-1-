/*
    Topic : Program to calculate area of triangle
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>
#include<math.h>

int main()
{
    printf("Enter the sides of triangle : \n");
    float area, s, a, b, c;
    scanf("%f%f%f",&a,&b,&c);
    s = (a + b + c)/2; // s -> semiperimeter
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle is %f\n",area);
    return 0;
}