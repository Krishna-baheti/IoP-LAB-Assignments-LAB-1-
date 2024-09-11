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
    int period = 31558150;
    int minutes, hours, days;
    minutes = period/60;
    hours = minutes/60;
    days = hours/24;
    printf("Days : %d \n",days);
    printf("Hours : %d \n",hours);
    printf("Minutes : %d \n",minutes);
    return 0;
}

