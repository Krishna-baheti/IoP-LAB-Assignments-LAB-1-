/*
    Topic : Program to read total seconds and covert into time
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int main()
{
    printf("Enter the time (in seconds) : ");
    int sec, min, hr;
    scanf("%d",&sec);
    hr = ((sec / 86400.0) - (sec / 86400))*24;
    min = ((sec/3600.0) - (sec / 3600))*60;
    printf("Hours : %d\n",hr);
    printf("Minutes : %d\n",min);
    return 0;
}