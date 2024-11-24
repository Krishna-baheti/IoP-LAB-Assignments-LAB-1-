/*
    Topic : Program to covert seconds into day, hours and minutes
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int main()
{
    int sec = 31558150, hr, day;
    float min;
    day = sec / 86400;
    hr = ((sec / 86400.0) - day)*24;
    min = ((sec/3600.0) - (sec / 3600))*60;
    printf("Days : %d\n",day);
    printf("Hours : %d\n",hr);
    printf("Minutes : %f\n",min);
    return 0;
}