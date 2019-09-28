#include<stdio.h>
#include<stdlib.h>

typedef struct{
   int score;
   char name[10];
}student;

typedef struct gradestack{ // complete the structure
   int top; //to indicate the 'top' position of the stack
   student arr_students[10];
}stack;

void push(student student, stack *stack){
    if(stack -> top == 9){
        printf("stack is full");    
    }
    else{
        stack -> arr_students[stack -> top+1] = student;
        stack -> top++;
        printf();
    } 
}
student pop(stack *stack){

    if(stack -> top == -1){
        printf("stack is empty.");
    }
    else{
        
        stack -> top--;
        return stack -> arr_students[stack -> top+1];;
    }   

}
student peek(stack *stack){

    if(stack -> top == -1){
        printf("stack is empty.");
        return;
    }
    else{
        return stack -> arr_students[stack -> top];
    }

}

//implement push(), pop() and peek()

int main(){
   //read data from testscores.txt file and place them in stack to initialize
    FILE *ifp, *opf;
    ifp = fopen("testscores.txt", "r");
    if(ifp == NULL){
        fprintf(stderr, "Can't open file");
        exit(1);
    }
    stack stack = {-1};
    while(!feof(ifp)){
        student s1;
        fscanf(ifp, "%s %d", &s1.name, &s1.score);
        printf("%s %d \n", s1.name, s1.score);
        push(s1, &stack);
    }
   //allow user to do push, pop, or peek
   return 0;
}