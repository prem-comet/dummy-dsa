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
    temp=head;
    for(i=0;i<n;i++)
    {
       
        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d", &newnode->data);
        newnode->next=NULL;
        
        if (head==NULL)
        {
            head = newnode; 
        }
        else
        { 
            
           
            temp->next=newnode;
            temp=newnode;
            
        }
      

    }
}