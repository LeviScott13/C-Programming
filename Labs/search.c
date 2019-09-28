#include <stdio.h>  


// A compare function that is used for searching an integer array 

int compareInt (void *i, void *j) 
{ 
	return *(int*)i == *(int*)j;
} 

int compareChar (void *i, void *j) 
{ 
	return *(char*)i == *(char*)j;
} 

int compareFloat (void *i, void *j) 
{ 
	return *(float*)i == *(float*)j;
} 

// General purpose search() function that can be used for searching 
// an element *x in an array arr[] of arr_size, where each element 
// has size indicated by elem_size

int search(void *arr, int arr_size, int elementSize, void *x, int(*ptr)(void *, void *)) 
{ 
    // need to complete appropriately   
    char *p = (char *)arr;
  
    int i; 
    for (i=0; i<arr_size; i++){ 
        if (ptr( p + i * elementSize, x)){ 
           return i; 
        }
    }
    // If element not found 
    return -1; 
} 

int main() // need to complete
{  
    // typedef struct{
    //     int age;
    //     char type;
    // }object;
    // object cheese[] = {{7,'y'}, 
    //                    {8,'x'},
    //                    {8,'y'},
    //                    {7,'x'}};
    int arr[] = {2, 5, 7, 90, 70}; 
    int x;
    //int size = sizeof(arr) / sizeof(arr[0]);
    printf("Value to search: ");
    scanf("%d", &x);     
    printf("%d", search(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), &x, compareInt));   
    // char str[] = {'A', 'B', 'C', 'D', 'E'};
    // int val = search(arr, /*value to search for */,sizeof(str) / sizeof(char))
        
    // float farr[] = {2.3, 3.5, 6.7, 6.8, 7.9};
    // int val = search(arr, /*value to search for */,sizeof(farr) / sizeof(float))

    return 0; 
} 
