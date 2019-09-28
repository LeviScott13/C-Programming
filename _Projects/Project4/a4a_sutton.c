#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define size 10000
int main(int argc, char *argv[])
{
    FILE *inputF, *outputF;
    
    inputF = fopen("Numbers.txt", "r");
    if (inputF == NULL) {
        fprintf(stderr, "Can't open input file!\n");
    }
    
    int numbers[10000];
    int range[10];
    
    int i = 0, high = 0, low = INT_MAX, total = 0, median;
    while(fscanf(inputF, "%d", &numbers[i]) != EOF){

        if(numbers[i] >= 0 && numbers[i] <= 999){
            range[0] += 1;
        }
        if(numbers[i] >= 1000 && numbers[i] <= 1999){
            range[1] += 1;
        }
        if(numbers[i] >= 2000 && numbers[i] <= 2999){
            range[2] += 1;
        }
        if(numbers[i] >= 3000 && numbers[i] <= 3999){
            range[3] += 1;
        }
        if(numbers[i] >= 4000 && numbers[i] <= 4999){
            range[4] += 1;
        }
        if(numbers[i] >= 5000 && numbers[i] <= 5999){
            range[5] += 1;
        }
        if(numbers[i] >= 6000 && numbers[i] <= 6999){
            range[6] += 1;
        }
        if(numbers[i] >= 7000 && numbers[i] <= 7999){
            range[7] += 1;
        }
        if(numbers[i] >= 8000 && numbers[i] <= 8999){
            range[8] += 1;
        }
        if(numbers[i] >= 9000 && numbers[i] <= 9999){
            range[9] += 1;
        }
        if(numbers[i] > high){
            high = numbers[i];
        }
        if(numbers[i] < low){
            low = numbers[i];
        }
        total += numbers[i];
        i++;
    }
    int temp = 0;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if (numbers[j] > numbers[j + 1]){
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    median = (numbers[4999] + numbers[5000]) / 2;
    fclose(inputF);
    outputF = fopen(argv[1], "w");
    if (outputF == NULL) {
        fprintf(stderr, "Didn't specify an output file in command line!\n");
    }
    fprintf(outputF, "Highest= %d \tLowest= %d \tAverage= %d \tMedian= %d\n", high, low, total/10000, median);
    fprintf(outputF, "Range: \t\t\t0-990 \t\t1000-1999 \t2000-2999 \t3000-3999 \t4000-4999 \t5000-5999 \t6000-6999 \t7000-7999 \t8000-8999 \t9000-9999\n");
    fprintf(outputF,"Count of numbers: \t%d \t\t%d \t\t%d \t\t%d \t\t%d \t\t%d \t\t%d \t\t%d \t\t%d \t\t%d", range[0], range[1], range[2], range[3], range[4], range[5], range[6], range[7], range[8], range[9]);
    fclose(outputF);
}