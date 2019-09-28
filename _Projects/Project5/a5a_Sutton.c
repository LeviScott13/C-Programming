#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size 20
int main(){

    FILE *ipf;
    ipf = fopen("properties.txt", "r");
    if (ipf == NULL) {
        fprintf(stderr, "Can't open input file!\n");
    }
    fscanf(ipf, "%*s %*s %*s", NULL);

    struct property{
        int addressNum;
        char addressStreetName [50];
        char addressType [50];
        int sqrFeet;
        int price; 
    }properties[size];

    int pos = 0;
    while(fscanf(ipf, "%d %s %s %d %d", &properties[pos].addressNum, &properties[pos].addressStreetName, &properties[pos].addressType, &properties[pos].sqrFeet, &properties[pos].price) != EOF){
        pos++;
    }
    int choice = 0;
    while(choice != 4){
        printf("\n  Enter '1' to Search properties by square footage\n");
        printf("  Enter '2' to Search properties by price\n");
        printf("  Enter '3' to Search properties by specific address\n");
        printf("  Enter '4' to Stop\n");

        printf("\n  Enter a choice: ");
        scanf("%d", &choice);
        
        if(choice == 1){
            int sqftRange1, sqftRange2;
            printf("  Enter a range of square footage you would like to search (ex. 2000-2200): ");
            scanf("%d-%d", &sqftRange1, &sqftRange2);
            printf("\n\n  Properties found: \n");
            for(int i = 0; i < 20; i++){
                if(properties[i].sqrFeet >= sqftRange1 && properties[i].sqrFeet <= sqftRange2){
                    printf("\n  Address: %d %s %s", properties[i].addressNum, properties[i].addressStreetName, properties[i].addressType);
                    printf("\tPrice: $%d\n", properties[i].price);
                }
            }
            printf("\n\n");
        }
        else if(choice == 2){
            int budgetRange1, budgetRange2;
            printf("  Enter a range of prices you would like to search (ex. 200000-220000): ");
            scanf("%d-%d", &budgetRange1 , &budgetRange2);
            printf("\n\n  Properties found: \n");
            for(int i = 0; i < 20; i++){
                if(properties[i].price >= budgetRange1 && properties[i].price <= budgetRange2){
                    printf("\n  Address: %d %s %s", properties[i].addressNum, properties[i].addressStreetName, properties[i].addressType);
                    printf("\tSquare Feet: %d\n", properties[i].sqrFeet);
                }
            }
            printf("\n\n");
        }
        else if(choice == 3){
            char address [50], addressType[50];
            double averageSqrFt = 0, averagePrice = 0, count = 0;
            printf("  Enter a specific address (Ex. Ruby Way): ");
            scanf("%s %s", &address, &addressType);
            printf("\n\n  Properties found: \n");
            for(int i = 0; i < 20; i++){
                if(!strcmp(properties[i].addressStreetName, address) && !strcmp(properties[i].addressType, addressType)){
                    printf("\n  Address: %d %s %s", properties[i].addressNum, properties[i].addressStreetName, properties[i].addressType);
                    printf("\tSquare Feet: %d", properties[i].sqrFeet);
                    printf("\tPrice: %d\n", properties[i].price);
                    count++;
                    averageSqrFt += properties[i].sqrFeet;
                    averagePrice += properties[i].price;
                }
            }
            printf("\n\n  Average square feet of properties on %s %s: %.2f", address, addressType, (averageSqrFt/count));
            printf("\n  Average cost of properties on %s %s: $%.2f\n", address, addressType, (averagePrice/count));
            printf("\n\n");
        }
        else if(choice == 4){
            printf("\n  Thank you! Come again\n");
            break;
        }
    }
}