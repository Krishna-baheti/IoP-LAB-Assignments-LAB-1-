/*
    Topic : Program to read time in hours,min,seconds and convert in seconds
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int main()
{
    printf("Enter time in following : \n");
    printf("Hours : ");
    int hours, minutes, seconds, time;
    scanf("%d", &hours);
    printf("\n");
    printf("Minutes : ");
    scanf("%d", &minutes);
    printf("\n");
    printf("Seconds : ");
    scanf("%d", &seconds);
    printf("\n");
    time = (3600*hours) + (60*minutes) + seconds;
    printf("Total time in seconds is : %d", time);
    printf("\n");
    return 0;
}