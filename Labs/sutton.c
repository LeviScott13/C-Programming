/* Code implementing a simple binary search tree (BST) that holds
distinct integers, and allow insert(), search(), and traversals. */

// You need to think recursively for most of the functions/actions

//Author:
// please rename the file with your lastnanme

#include<stdio.h>
#include<stdlib.h>

typedef struct bstnode{
   int val;
   struct bstnode *lch;
   struct bstnode *rch;
}bstnode;


 bstnode *create_node(int key){ //complete the function
 // can you create a bstnode 'temp' and allocate space dynamically?
 struct bstnode *temp =  (struct bstnode *)malloc(sizeof(struct bstnode));
 temp->val = key;
 // code to initialize the other two fields of the node?
 temp -> lch = temp -> rch = NULL;
 return temp;
}

bstnode* insert_node(bstnode *node, int key){ //here *node indicates the pointer to the insertion point

   if(node == NULL) // when the BST is empty, we create a new node
      return create_node(key);
   
   // code to handle the other cases?
   if(key < node -> val){
         node -> lch = insert_node(node -> lch, key);
   }
   else if(key > node -> val){
         node -> rch = insert_node(node -> rch, key);
   }
   return node;
}

bstnode* search(bstnode* root, int key){ // complete the function
      while(root != NULL){
            if(key > root -> val){
                  root = root -> rch;
            }
            else if(key < root -> val){
                  root = root -> lch;
            }
            else{
                return root;
            }
      }
}
void search_result(bstnode* root, int key){ // this is done for you
   bstnode *item = search(root, key);
   if(item != NULL)
      printf("The key %d is found in the BST.\n", key);
   else
      printf("The key %d is not found in the BST.\n", key);
}

void inorder_display(bstnode *root){ //this is done for you
   if(root != NULL){
      inorder_display(root->lch);
      printf("%d \n", root->val);
      inorder_display(root->rch);
   }
}

// [Extra credit] can you write a post-order display as well?

void postorder_display(bstnode *root){

      if(root == NULL){
            return;
      }
      postorder_display(root -> lch);
      postorder_display(root -> rch);
      printf("%d ", root -> val);
}
int main(){
   bstnode *root = NULL;

   //create a menu to allow user to do any of the following
   //to insert node by specifying the data
   //to display the tree inorder (if postorder is implemented, then another option for it
   //to enter a key to be searched
    char userInput[10];
    printf("To insert a node type: insert\n");
    printf("To display tree inorder type: inorder\n");
    printf("To display tree postorder type: postorder\n");
    printf("To search for a key type: search\n");
    scanf("\n%s", &userInput);
    int num;
    if(strcmp(userInput, "insert") == 0){
        printf("\nType a number to insert a node into the tree: ");
        scanf("%d", &num);
        root = insert_node(root, num);
        int choice;
        printf("To insert again type: '1'. To stop type: '0': ");
        scanf("%d", &choice);
        while(choice == 1){
            printf("\nType a number to insert a node into the tree: ");
            scanf("%d", &num);
            root = insert_node(root, num);
            printf("To insert again type: '1'. To stop type: '0': ");
            scanf("%d", &choice);
            if(choice == 0){
                printf("To insert a node type: insert\n");
                printf("To display tree inorder type: inorder\n");
                printf("To display tree postorder type: postorder\n");
                printf("To search for a key type: search\n");
                scanf("\n%s", &userInput);
            }
        }
    }
    if(strcmp(userInput, "inorder") == 0){
        inorder_display(root);
    }
    if(strcmp(userInput,"postorder") == 0){
        postorder_display(root);
    }
    if(strcmp(userInput,"search") == 0){
        printf("\nType a number you want to searhc in the tree: ");
        scanf("%d", &num);
        search_result(root, num);
    }
    return 0;   
}
   