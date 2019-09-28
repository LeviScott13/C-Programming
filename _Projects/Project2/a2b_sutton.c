#include <stdio.h>

int integerToBinary(int num){
    
    if(num == 0){
        return 0;
    }
    else{
        return(num % 2 + 10 * integerToBinary(num / 2));
    }
}

int binaryToInteger(int num){
    int thisNum = num, intValue = 0, value = 1;

    int n = thisNum;
    while(n > 0){
        int modValue = n % 10;
        n = n / 10;

        intValue += modValue * value;
        value = value * 2; 
    }
    return intValue;
}

int main(){
    
    int num, choice1, choice2;

    printf("\n\t\t\t\t\tCONVERTER");
    printf("\n\nTo enter an Integer Value type '1'. To enter a Binary Value type '2': ");
    scanf("%d", &choice1);
    
    if(choice1 == 1){
        printf("\nEnter an Integer Value: ");
        scanf("%d", &num);
        printf("\nTo convert Integer Value to Binary form type '1': ");
        scanf("%d", &choice2);
        
        if(choice2 == 1){
            printf("\nInteger Value = %d", num);
            printf("\nInteger Value: %d in Binary form = %d\n", num, integerToBinary(num));
        }
    }
    if(choice1 == 2){
        printf("\nEnter a Binary Value: ");
        scanf("%d", &num);
        printf("\nTo convert Binary Value to Integer form type '1': ");
        scanf("%d", &choice2);
        
        if(choice2 == 1){
            printf("\nBinary Value = %d", num);
            printf("\nBinary Value: %d in Integer form: %d\n", num, binaryToInteger(num));
        }
    }
    return 0;
}