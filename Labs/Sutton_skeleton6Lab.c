/* A program that allows user to enter a reminder message corresponding 
to a day of the month and  displays the reminders sorted by day. The 
program accepts input until the user enters 0 for the day. */

#include<stdio.h>
#include<string.h>
#include <stdlib.h>

#define MAX_REMIND 50
#define MAX_LENGTH 60

int read_msg(char str[], int n);

int main(){
   char * reminder[MAX_REMIND];//[MAX_LENGTH + 3];
   char day_str[3], msg[MAX_LENGTH + 1];
   int day, i, j, num_remind = 0;
   
   for( ; ; ){
      if(num_remind == MAX_REMIND){
         printf("---- No space for any more reminders! ----\n");
         break;
      }
      
      puts("Enter day and reminder message: ");
      scanf("%2d", &day);
      if(day == 0)
         break;
         
      sprintf(day_str, "%2d", day);
      read_msg(msg, MAX_LENGTH);
      
      for(i=0; i<num_remind; i++)
         if(strcmp(day_str, reminder[i]) < 0)
            break;
      
      for(j=num_remind; j>i; j--)
         strcpy(reminder[j], reminder[j-1]);
         reminder[i] = malloc(strlen(msg) + 3);

      strcpy(reminder[i], day_str);
      strcat(reminder[i], msg);
      
      num_remind++;   
   }
   
   printf("\nDay Reminders\n");
   for(i=0;i<num_remind;i++)
      printf(" %s\n", reminder[i]);

   return 0;
}

int read_msg(char str[], int n){
   int ch, i=0;
   while((ch = getchar()) != n && ch != '\n')
      if(i < n)
         str[i++] = ch;
   
   str[i] = '\0';
   return i;
}