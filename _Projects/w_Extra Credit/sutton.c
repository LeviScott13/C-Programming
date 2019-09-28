#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    printf("\nTo create your pin code, please input a single digit accordingly\n\n");

    int num[4];
    for(int i = 0; i < 4; i++){ 
        if(i == 0){
            printf("Enter %dst digit of your pin: ", i + 1);
            scanf("%d", &num[i]);
            while(num[i] < 0 || num[i] > 9){
                printf("\nError: Invalid pin #, must be a single digit. Try again!\n\n");
                printf("Enter %dst digit of your pin: ", i + 1);
                scanf("%d", &num[i]);
            }
        }
        if(i == 1){
            printf("Enter %dnd digit of your pin: ", i + 1);
            scanf("%d", &num[i]);
            while(num[i] < 0 || num[i] > 9){
                printf("\nError: Invalid pin #, must be a single digit. Try again!\n\n");
                printf("Enter %dnd digit of your pin: ", i + 1);
                scanf("%d", &num[i]);
            }
        }
        if(i == 2){
            printf("Enter %drd digit of your pin: ", i + 1);
            scanf("%d", &num[i]);
            while(num[i] < 0 || num[i] > 9){
                printf("\nError: Invalid pin #, must be a single digit. Try again!\n\n");
                printf("Enter %drd digit of your pin: ", i + 1);
                scanf("%d", &num[i]);
            }
        }
        if(i == 3){
            printf("Enter %dth digit of your pin: ", i + 1);
            scanf("%d", &num[i]);
            while(num[i] < 0 || num[i] > 9){
                printf("\nError: Invalid pin #, must be a single digit. Try again!\n\n");
                printf("Enter %dth digit of your pin: ", i + 1);
                scanf("%d", &num[i]);
            }
        }
    }
    for(int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            if(i == 0){
                if(num[j] == 0){
                    printf(" - - \t");
                }
                if(num[j] == 1){
                    printf("     \t");
                }
                if(num[j] == 2){
                    printf(" - - \t");
                }
                if(num[j] == 3){
                    printf(" - - \t");
                }
                if(num[j] == 4){
                    printf("     \t");
                }
                if(num[j] == 5){
                    printf(" - - \t");
                }
                if(num[j] == 6){
                    printf(" - - \t");
                }
                if(num[j] == 7){
                    printf(" - - \t");
                }
                if(num[j] == 8){
                    printf(" - - \t");
                }
                if(num[j] == 9){
                    printf(" - - \t");
                }
            }
            if(i == 1){
                if(num[j] == 0){
                    printf("|   |\t");
                }
                if(num[j] == 1){
                    printf("    |\t");
                }
                if(num[j] == 2){
                    printf("    |\t");
                }
                if(num[j] == 3){
                    printf("    |\t");
                }
                if(num[j] == 4){
                    printf("|   |\t");
                }
                if(num[j] == 5){
                    printf("|    \t");
                }
                if(num[j] == 6){
                    printf("|    \t");
                }
                if(num[j] == 7){
                    printf("    |\t");
                }
                if(num[j] == 8){
                    printf("|   |\t");
                }
                if(num[j] == 9){
                    printf("|   |\t");
                }
            }
            if(i == 2){
                if(num[j] == 0){
                    printf("     \t");
                }
                if(num[j] == 1){
                    printf("     \t");
                }
                if(num[j] == 2){
                    printf(" - - \t");
                }
                if(num[j] == 3){
                    printf(" - - \t");
                }
                if(num[j] == 4){
                    printf(" - - \t");
                }
                if(num[j] == 5){
                    printf(" - - \t");
                }
                if(num[j] == 6){
                    printf(" - - \t");
                }
                if(num[j] == 7){
                    printf("     \t");
                }
                if(num[j] == 8){
                    printf(" - - \t");
                }
                if(num[j] == 9){
                    printf(" - - \t");
                }
            }
            if(i == 3){
                if(num[j] == 0){
                    printf("|   |\t");
                }
                if(num[j] == 1){
                    printf("    |\t");
                }
                if(num[j] == 2){
                    printf("|    \t");
                }
                if(num[j] == 3){
                    printf("    |\t");
                }
                if(num[j] == 4){
                    printf("    |\t");
                }
                if(num[j] == 5){
                    printf("    |\t");
                }
                if(num[j] == 6){
                    printf("|   |\t");
                }
                if(num[j] == 7){
                    printf("    |\t");
                }
                if(num[j] == 8){
                    printf("|   |\t");
                }
                if(num[j] == 9){
                    printf("    |\t");
                }
            }
            if(i == 4){
                if(num[j] == 0){
                    printf(" - - \t");
                }
                if(num[j] == 1){
                    printf("     \t");
                }
                if(num[j] == 2){
                    printf(" - - \t");
                }
                if(num[j] == 3){
                    printf(" - - \t");
                }
                if(num[j] == 4){
                    printf("     \t");
                }
                if(num[j] == 5){
                    printf(" - - \t");
                }
                if(num[j] == 6){
                    printf(" - - \t");
                }
                if(num[j] == 7){
                    printf("     \t");
                }
                if(num[j] == 8){
                    printf(" - - \t");
                }
                if(num[j] == 9){
                    printf(" - - \t");
                }
            }
        }
        printf("\n");
    } 
}