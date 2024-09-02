/*
    Topic : Program to read marks of five subjects of a student
            and calculate total and percentage obtained.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Taking input from user the marks of five subjects, 
    and then finding their total and percentage.
*/

#include<stdio.h>

int main()
{
    printf("Enter the following (out of 100) : \n");
    int maths, phy, chem, bio, eng, total;
    float percentage;
    printf("1) Marks obtained in Maths : ");
    scanf("%d", &maths);
    printf("\n");
    printf("2) Marks obtained in Physics : ");
    scanf("%d", &phy);
    printf("\n");
    printf("3) Marks obtained in Chemistry : ");
    scanf("%d", &chem);
    printf("\n");
    printf("4) Marks obtained in Biology : ");
    scanf("%d", &bio);
    printf("\n");
    printf("5) Marks obtained in English : ");
    scanf("%d", &eng);
    printf("\n");
    total = maths + phy + chem + bio + eng;
    percentage = (total/500.0)*100.0;
    printf("Total marks obtained are : %d", total);
    printf("\n");
    printf("Percentage obtained : %f", percentage);
    printf("\n");
    return 0;
}