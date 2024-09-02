/*
    Topic : Program to calculate cutoff marks of a student
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Taking input from user the marks in various subjects and 
    entrance exam to find the cutoff marks using formula :
    CM = M/2 + P/2 + C/2 + E,  cm = cutoff marks
    m = maths, p = physics, c = chemistry, e = marks in entrance exam
*/

#include<stdio.h>

int main()
{
    float m, p, c, e, cm;
    printf("Enter the following marks (out of 200) : \n");
    printf("1) Maths : ");
    scanf("%f", &m);
    printf("\n");
    printf("2) Physics : ");
    scanf("%f", &p);
    printf("\n");
    printf("3) Chemistry : ");
    scanf("%f", &c);
    printf("\n");
    printf("4) Enter the marks in entrance exam (out of 100) : ");
    scanf("%f", &e);
    printf("\n");
    cm = m/2.0 + p/2.0 + c/2.0 + e;
    printf("Cutoff marks : %f", cm);
    printf("\n");
    return 0;
}