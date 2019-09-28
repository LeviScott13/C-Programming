#include <stdio.h>
#include <string.h>

#define size 30
int caeser(char* cipher, int n){
    int i = 0, cValue;
    char encode;
    
    printf("\n\n\tEncoded text: ");

    for (int i = 0; i < strlen(cipher); i++){
        if(cipher[i] == ' '){
            printf(" ");
            continue;
        }
        if(cipher[i] >= 'A' && cipher[i] <= 'Z'){
            cValue = ((int)cipher[i] - 65 + n) % 26 + 65;
            encode = (char)(cValue);
        }
        else if(cipher[i] >= 'a' && cipher[i] <= 'z'){
            cValue = ((int)cipher[i] - 97 + n) % 26 + 97;
            encode = (char)(cValue);
        }
        else{
           printf("ERROR: Only letters are accepted! Please re-run program with an acceptable text");
           break;
        }
        printf("%c", encode);
    }
    printf("\n");
}
int main(){
    
    printf("\n\n%50s", "Caesers Cipher");
    
    char cipher [size];
    int n;
    printf("\n\n\n\t(Note: Text must be <= 30 characters long)");
    printf("  Enter a text to be encoded: ");
    gets(cipher);
    printf("\n\n\t(Note: Rotation amount must be a number (1-9))");
    printf("  Enter rotation amount: ");
    scanf("%d", &n);
    
    if(strlen(cipher) > 30 || n <= 0 || n >= 10){
        printf("\n\tERROR: Check to see if the entered text is > 30 characters or Rotation amount is between 1 <= n <= 9.");
        printf(" Please re-run the program with the correct corresponding values.\n");
    }
    else{
        caeser(cipher, n);
    }
    return 0;
}