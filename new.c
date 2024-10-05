#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node{           
int data;
struct node *next;
};


void main()
{
    int i,n;
    printf("enter choice");
    scanf("%d",&n);
    struct node *head,*temp;
    head=NULL;
    
    for(i=0;i<n;i++)
    {
       
        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d", &newnode->data);
       
        
        if (head==NULL)
        {
            head = newnode; 
            temp=head;
        }
    
        else
        { 
            
           
            temp->next=newnode;
            temp=temp->next;
            
        }
      

    }
 temp->next=NULL;

     
}