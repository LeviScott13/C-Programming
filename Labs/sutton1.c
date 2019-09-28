#include<stdio.h>

void printarray(int *arrptr, int size){
  int i;
  for(i=0;i<size;i++){
    printf("%d\t", arrptr[i]);
  }
  printf("\n");
}


int main(){

  int a[5] = {1, 1, 1, 1, 1};
  int *p;
    
    /* 1. Indicate the output and explain (this one is done for you) */
    p = a;

    printarray(a, 5);
    printf("p = %p\t a = %p\n", p, a);
    /* Output: 1 1 1 1 1
    /* Explanation: It is same as the initial array, as 
    p is pointing to the first location of it. printing 
    of two addresses are same. */
    
   /* 2. Indicate the output and explain */
    *p = 3;
    
    printarray(a, 5);

    /* Output: 3 1 1 1 1 */
    /* Explain: Pointer p is initialized to a[0] and updates its element to 3 resulting in the following output*/
    
    
    /* 3. Indicate the output and explain */
    *p++ = 5;
    
    printarray(a, 5);

    /* Output: 5 1 1 1 1 */
    /* Explain: Because of the incremented operator is postfix, 
                the pointer p is stil at a[0], it changes the element to 5 and then increments *p to position a[1]*/

    /* 4. Indicate the output and explain */
    *++p = 6;
    
    printarray(a, 5);

    /* Output: 5 1 6 1 1*/
    /* Explain: In this case the incremented operator is pre fix, 
                the pointer p is at a[1], the pointer increments to a[2], and assigns element at a[2] to 6 */

    
   /* 5. Indicate the output and explain */
    a[3] = (*p)++;
    
    printarray(a, 5);

    /* Output: 5 1 7 6 1 */
    /* Explain: In this case a[3] is assigned to the value at *p which is 6,
                pointer p is at a[2] and since the increment is postfix the element at a[2] gets udated to 7*/

   /* 6. Indicate the output and explain */
    p = &a[4];
    *p = *(p - 2);
    
    printarray(a, 5);
  
    /* Output: 5 1 7 6 7*/
    /* Explain: In this case the pointer p is initialized to a[4] and updates the element at a[4] to the element  
                pointing at a[2]*/

    return 0;
}
