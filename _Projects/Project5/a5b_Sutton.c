#include <stdio.h>
#include <stdlib.h>
#include <float.h>

#define size 7
int main(){

    FILE *ipf;
    ipf = fopen("processes.txt", "r");
    if (ipf == NULL) {
        fprintf(stderr, "Can't open input file!\n");
    }
    fscanf(ipf, "%*s %*s %*s %*s", NULL);

    struct process{
        int processId;
        double arrivalTime;
        int duration;
        int rank;
    }processes[size];

    int pos = 0;
    while(fscanf(ipf, "%d %lf %d %d", &processes[pos].processId, &processes[pos].arrivalTime, &processes[pos].duration, &processes[pos].rank) != EOF){
        pos++;
    }
    int choice = 0;
    while(choice != 4){
        printf("\n  Enter '1' to order process by Arrival Time\n");
        printf("  Enter '2' to order process by Duration\n");
        printf("  Enter '3' to order process by Rank\n");
        printf("  Enter '4' to Stop\n");

        printf("\n  Enter a choice: ");
        scanf("%d", &choice);

        if(choice == 1){
            
            printf("\n  Processes by Arrival Time: \n");
            struct process temp;
            for(int i = 0; i < size; i++){
                for(int j = i + 1; j < size; j++){
                    if(processes[i].arrivalTime > processes[j].arrivalTime){
                        temp = processes[i];
                        processes[i] = processes[j];
                        processes[j] = temp;
                    }
                }
            }
            for(int i = 0; i < size; i++){
                printf("\n  Process Id: %d", processes[i].processId);
                printf("\tArrival Time: %.2f", processes[i].arrivalTime);
                printf("\tDuration: %d", processes[i].duration);
                printf("\tRank: %d\n", processes[i].rank);
            }
        }
        if(choice == 2){
            
            printf("\n  Processes by Duration: \n");
            struct process temp;
            for(int i = 0; i < size; i++){
                for(int j = i + 1; j < size; j++){
                    if(processes[i].duration > processes[j].duration){
                        temp = processes[i];
                        processes[i] = processes[j];
                        processes[j] = temp;
                    }
                }
            }
            for(int i = 0; i < size; i++){
                printf("\n  Process Id: %d", processes[i].processId);
                printf("\tArrival Time: %.2f", processes[i].arrivalTime);
                printf("\tDuration: %d", processes[i].duration);
                printf("\tRank: %d\n", processes[i].rank);
            }
        }
        if(choice == 3){
            
            printf("\n  Processes by Rank: \n");
            struct process temp;
            for(int i = 0; i < size; i++){
                for(int j = i + 1; j < size; j++){
                    if(processes[i].rank > processes[j].rank){
                        temp = processes[i];
                        processes[i] = processes[j];
                        processes[j] = temp;
                    }
                }
            }
            for(int i = 0; i < size; i++){
                printf("\n  Process Id: %d", processes[i].processId);
                printf("\tArrival Time: %.2f", processes[i].arrivalTime);
                printf("\tDuration: %d", processes[i].duration);
                printf("\tRank: %d\n", processes[i].rank);
            }
        }
        if(choice == 4){
            printf("\n  Thank you! Come again\n");
            break;
        }
    }
}