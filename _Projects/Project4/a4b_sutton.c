#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *inputF;
    
    inputF = fopen("flights.txt", "r");
    if (inputF == NULL) {
        fprintf(stderr, "Can't open input file!\n");
    }
    fscanf(inputF, "%*s %*s", NULL);
    
    int hours[20], minutes[20]; 
    int pos = 0;
    while (fscanf(inputF, "%d:%d ", &hours[pos], &minutes[pos]) != EOF)
    {
        pos++;
    }
    pos = 0;
    int a[10], b[10]; 
    for (int i = 0; i < 20; i++){
        if(i % 2 == 0){
            a[pos] = (hours[i] * 60) + minutes[i]; 
        }
        else{
            b[pos] = (hours[i] * 60) + minutes[i];
            pos++;
        }
    }
    int hour, minute;
    printf("Enter the current hour in time : ");
    scanf("%d", &hour);
    if(hour < 0 || hour > 23){
        while(hour < 0 || hour > 23){
            printf("Error: Invalid time given. Please re-enter your time!\n\n");
            printf("Enter the hour in time : ");
            scanf("%d", &hour);  
        }
    }
    printf("Enter the current minutes in time : ");
    scanf("%d", &minute);
    if(minute < 0 || minute > 59){
        while(hour < 0 || minute > 59){
            printf("Error: Invalid time given. Please re-enter your time!\n\n");
            printf("Enter the minutes in time: ");
            scanf("%d", &minute);  
        }
    }
    int timeGiven = (hour * 60) + minute;
    
    int pointA, pointB; 
    for (int i = 0; i < 10; i++)
    {
        if (timeGiven < a[i])
        {
            pointA = a[i];
            pointB = b[i];
            break;
        }
    }
    printf("\n\nClosest departure from A is %d:%d and arriving at %d:%d in B", pointA / 60, pointA % 60, pointB / 60, pointB % 60);
}