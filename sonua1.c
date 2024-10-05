#include <stdio.h>
#include <stdlib.h>
struct node { 
    int data;
    struct node *left;
    struct node *right;
};

struct node* newnode(int data){
    struct node* node = (struct node*)malloc(sizeof (struct node));
    node->data=data;
    node->left=NULL;
    node->right =NULL;
    return node;
  
}

void insert(struct node **node_ref, int new_data){
    struct node *node = *node_ref;
    if(node=NULL){
        *node_ref=newnode(new_data);
        return;
    }
 if (new_data<node->data){
     insert(&node->left,new_data);
     } else {
         insert(&node->right,new_data);
        }
}

void inorderTraversal(struct node *node){
    if(node==NULL){
        return;
    }
    inorderTraversal(node->left);
    printf("%d ",node->data);
    inorderTraversal(node->right);
    }
    
void preorderTraversal(struct node *node){
    if(node==NULL){
        return;
    }
    printf("%d ",node->data);
    preorderTraversal(node->left);
    preorderTraversal(node->right); 
}

void postorderTraversal(struct node *node){
    if(node==NULL){
        return;
    }
    postorderTraversal(node->left);
     postorderTraversal(node->right);
     printf("%d ",node->data);
}

int main(){
    struct node *root = NULL;
    
    // for tree i)
    int i,n,c;
    printf("enter number of nodes :  ");
    scanf("%d",&n);
    printf("enter  %d sorted integers: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&c);
        insert(&root,c);
    }
    
    printf("\nInorder traversal of the BST:  ");
    inorderTraversal(root);
    printf("\nPreorder traversal of the BST:  ");
     preorderTraversal(root);
     printf("\nPostoreder traversal of the BST: ");
      postorderTraversal(root);
      
    
      free(root);
      
      return 0;
      
}
      


