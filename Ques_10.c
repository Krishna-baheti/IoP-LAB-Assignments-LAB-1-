/*
    Topic : Program to calculate cutoff marks of a student using the formula 
            CM = M/2+P/2+C/2+E 
            WHERE CM = Cut of f mark 
            M = Marks in Mathematics out of 200 
            P = Marks in Physics out of 200 
            C = Marks in Chemistry out of 200 
            E = Marks in entrance examination out of 100
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
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
    cm = m/2 + p/2 + c/2 + e;
    printf("Cutoff marks : %f", cm);
    printf("\n");
    return 0;
}