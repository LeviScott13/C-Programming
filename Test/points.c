#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// int distance(int x1, int y1,int x2, int y2){
//         int distance1 = (pow((x2 - x1), 2));
//         int distance2 = (pow((y2 - y1),2));
//         int total = distance1 + distance2;
// }
//#define min 9999
int main(){
    FILE *inputF;

    inputF = fopen("points.txt", "r");
    
    int pos = 0;
    int disX[10], disY [10];
    while (fscanf(inputF, "%d %d", &disX[pos], &disY[pos]) != EOF){
        pos++;
    }
    int minDistance, x, y;
    for(int r = 0; r < 10; r++){
        // x = disX[r];
        // y = disY[r];
        // printf("\n%d %d\n", x, y);
        int min = 9999;
        for(int c = r + 1; c < 10; c++){
            // distances[r] = sqrt((double)distance(disX[r],disY[r],disX[c], disY[c]));
            // min = minimumDistance(distances[r]);
            minDistance = sqrt((double) (pow ((disX[r] - disX[c]), 2)) + (pow ((disY[r] - disY[c]), 2)));
            printf("%d ", minDistance);
            if(minDistance < min){
                min = minDistance;
            }
        }
        printf("\n");
    } 
            printf("\n%d", min);

}