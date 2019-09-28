//Levi Sutton

#include <stdio.h>
int main(){
    enum options{AGREE, NEUTRAL, DISAGREE};

    struct question{
        char text[80];
        int points;
        enum options opt;
    };

    struct question question;

    printf("Enter a question: ");
    scanf("%s", &question.text);

    //printf("Question = %s", question.text);
    char choice [80];
    printf("\nEnter an option(AGREE, NEUTRAL, or DISAGREE): ");
    scanf("%d", &choice);

    if(choice == "AGREE"){
        question.opt = 0;
        question.points = 1;
    }
    if(choice == "NEUTRAL"){
        question.opt = 1;
        question.points = 0;
    }
    if(choice == "DISAGREE"){
        question.opt = 2;
        question.points = -1;
    }
    printf("Question: %s", question.text);
    if(question.opt = AGREE){
        printf("\nOption Entered: AGREE \n Points Earned: %d", question.points);
    }
    if(question.opt = NEUTRAL){
        printf("\nOption Entered: NEUTRAL \n Points Earned: %d", question.opt, question.points);
    }
    if(question.opt = DISAGREE){
        printf("\nOption Entered: \n Points Earned: %d", question.opt, question.points);
    }
}