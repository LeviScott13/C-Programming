#include <stdio.h>
#include <stdlib.h> 

//Function to create a magic square
int voila(int n)
{
    //Creates a n x n magic square
    int magicSquare[n][n];

    //Sets each value in square to 0
    for(int r = 0; r < n; r++){
        for(int c = 0; c < n; c++)
            magicSquare[r][c] = 0;
    }
    //initialize starting point
    int r = 0;
    int c = n / 2;
    
    //Loop for inputting numbers
    for(int i = 1; i <= n*n; ){
        
        //Condition to wrap around square if outside the row and columns
        if(r < 0 && c == n){
            r += 2;
            c = n - 1;
        }
        //Condition to go to the bottom of the square if outside row boundary limit
        else if(r < 0){ 
            r = n - 1;
        }
        //Condition to wrap around to the side of the square if outside column boundary limit
        else if(c == n){
            c = 0;
        }
        //Condition to place value below previous placed value if a place in the square is being occupied
        if(magicSquare[r][c]){
            r += 2;
            c -= 1;
            continue;
        }
        //Places values in square
        else{
            magicSquare[r][c] = i++;
        }
        //Next locations
        r--; 
        c++;
    }
    //Print out magic square
    for(int r = 0; r < n; r++){
        printf("\t\t\t");
        for(int c = 0; c < n; c++)
            printf("%d\t", magicSquare[r][c]);
            printf("\n");
    }
    printf("\n\n\tMagic Value for a %d x %d magic square is: %d\n", n, n, n*(n*n + 1)/2);
}
int main(int argc, char* argv[]){

    int n;

    printf("\n\n%50s", "MAGIC SQUARE");
    puts("\n\n\tAssume a magic square is defined by (n x n), where 'n' is an odd number 1-15\n\n");
    
    //Error condition for only one argument given
    if(argc == 1){
        printf("\n\tERROR: Only the program name is being passed, no argument initializing the value for 'n'."); 
        printf(" Please re-run the program with a valid argument for the value of 'n' (Ex: filename 3).\n");
    }
    //Condition for two arguments / initializes n by converting arg[1] from ascii value to integer 
    else if(argc == 2){
        n = atoi(argv[1]);
    }
    //Error condition for two or more arguments given
    else{
        printf("\n\tERROR: Too many arguments, only two are needed (filename and value of 'n').");
        printf(" Please re-run the program with the correct number of arguments.\n");
    }
    //Error condition to check if n is not an odd number 1-15
    if(n <= 0 && n > 15 || n % 2 == 0){
        printf("\n\tERROR: Value of 'n' must be an odd number 1-15!");
        printf(" Please re-run the program and enter an acceptable value for 'n' to construct a magic square.\n");
    }
    //Sends value of n to voila function
    else{
        voila(n);
    }
    return 0;
}


