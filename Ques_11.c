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
    int seconds, minutes, hours;
    scanf("%d",&seconds);
    minutes = seconds/60;
    hours = minutes/60;
    printf("Hours : %d \n",hours);
    printf("Minutes : %d \n",minutes);
    return 0;
}
