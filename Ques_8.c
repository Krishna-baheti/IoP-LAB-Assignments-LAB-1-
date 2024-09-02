/*
    Topic : Program to covert seconds into day, hours and minutes
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Taking input from user the time in seconds and converting 
    it to minutes by dividing by 60 and then converting it to hours by dividing
    it by 3600 and converting it to days by dividing it by 3600*24 = 86400
*/

#include<stdio.h>

int main()
{
    printf("Enter the time (in seconds) : ");
    int seconds;
    float minutes, hours, days;
    scanf("%d", &seconds);
    minutes = seconds/60.0;
    hours = seconds/3600.0;
    days = seconds/86400.0;
    printf("Days : %f",days);
    printf("\n");
    printf("Hours : %f", hours);
    printf("\n");
    printf("Minutes : %f", minutes);
    printf("\n");
    return 0;
}