#include <stdio.h>

 int main(){
    
    printf("\n\t\t\t\t\tFREQUENCY COUNTER");
    int userNum, countNum;
    int zeroCount = 0, oneCount = 0, twoCount = 0, threeCount = 0, fourCount = 0, fiveCount = 0, sixCount = 0, sevenCount = 0, eightCount = 0, nineCount = 0;
    printf("\n\nEnter a number: ");
    scanf("%d", &userNum);
    printf("\nDigits: \t0\t1\t2\t3\t4\t5\t6\t7\t8\t9");
    printf("\nFrequency:  \t");

    while(userNum != 0){

        countNum = userNum % 10;
        if (countNum == 0){
            zeroCount++;
        }
        if (countNum == 1){
            oneCount++;
        }
        if (countNum == 2)
        {
            twoCount++;
        }
        if (countNum == 3){
            threeCount++;
        }
        if (countNum == 4){
            fourCount++;
        }
        if (countNum == 5){
            fiveCount++;
        }
        if (countNum == 6){
            sixCount++;
        }
        if (countNum == 7){
            sevenCount++;
        }
        if (countNum == 8){
            eightCount++;
        }
        if (countNum == 9){
            nineCount++;
        }
        userNum = userNum / 10;
    }
    printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n", zeroCount, oneCount, twoCount, threeCount, fourCount, fiveCount, sixCount, sevenCount, eightCount, nineCount);
    return 0;
 }