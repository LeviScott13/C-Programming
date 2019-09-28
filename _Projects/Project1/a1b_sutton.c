#include <stdio.h>
#include<stdlib.h>

/******************************************************* 
//Levi Sutton
//CS3335
//Fall 2018
********************************************************/

#define guessAttempt 10
int main(){
    
    printf("\n\t\t\tGUESS THE NUMBER!\n");

    srand(time(NULL));

    int randomNumb = rand() % 101;
    int thisGuess = guessAttempt;
    int userGuess;
    
    for (int i = 0; i < thisGuess; i++){

        printf("\n\nGuess a number User: ");
        scanf("%d", &userGuess);
        if(userGuess == randomNumb){
            printf("\nCongratulations User You WIN!!");
            break;
        }
        else if(userGuess != randomNumb){
            printf("\nSorry user, you are Wrong!\n");
            if(randomNumb > userGuess){
                printf("\nHIGHER"); 
            }
            if(randomNumb < userGuess){
                printf("\nLOWER");
            }
        }
    }
    printf("\n\nThe right number is %d!\n", randomNumb);

    return 0;    
}