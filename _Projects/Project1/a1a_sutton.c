#include <stdio.h>
/******************************************************* 
//Levi Sutton
//CS3335
//Fall 2018
********************************************************/
int main(){
    
    int numbOfStudents;
    
    printf("\n\t\t\t\tCS3335 GRADEBOOK\n");
    printf("\nNumber of students: ");
    scanf("%d", &numbOfStudents);

    int numbGrade; 
    char letterGrade;
    float average; 

    for (int i = 0; i < numbOfStudents; i++){

        printf("\nStudent %d's number grade(0-100) is: ", i + 1);
        scanf("%d", &numbGrade);

        average += numbGrade;
        if (numbGrade >= 90){
            char letterGrade = 'A';
            printf("Student %d's letter grade is: %c\n", i + 1, letterGrade);
        }
        if (numbGrade >= 80 && numbGrade < 90){
            char letterGrade = 'B';
            printf("Student %d's letter grade is: %c\n", i + 1, letterGrade);
        }
        if (numbGrade >= 70 && numbGrade < 80){
            char letterGrade = 'C';
            printf("Student %d's letter grade is: %c\n", i + 1, letterGrade);
        }
        if (numbGrade >= 60 && numbGrade < 70){
            char letterGrade = 'D';
            printf("Student %d's letter grade is: %c\n", i + 1, letterGrade);
        }
        else if (numbGrade < 60 ){
            char letterGrade = 'F';
            printf("Student %d's letter grade is: %c\n", i + 1, letterGrade);
        }
    }

    printf("\nClass average is: %.2f\n", average / numbOfStudents); 

    return 0;
}