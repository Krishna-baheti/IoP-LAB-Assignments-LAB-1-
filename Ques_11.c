/*
    Topic : Program to read total seconds and covert into time
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Taking input from user the time in seconds and converting 
    it to minutes by dividing by 60 and then converting it to hours by dividing
    it by 3600 
*/

#include<stdio.h>

int main()
{
    printf("Enter the time (in seconds) : ");
    int seconds;
    float minutes, hours;
    scanf("%d", &seconds);
    hours = seconds/3600;
    minutes = (seconds/3600.0 - seconds/3600)*60;
    printf("\n");
    printf("Hours : %f", hours);
    printf("\n");
    printf("Minutes : %f", minutes);
    printf("\n");
    return 0;
}