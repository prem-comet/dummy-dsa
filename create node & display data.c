#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node{           
int data;
struct node *next;
};


void display(struct node*ptr)
     { struct node *temp,*next;
         int n;
          printf("enter choice");
          scanf("%d",&n);
         temp=ptr;
         for(int i=0;i<=n-1;i++)
          { printf("%d\n",temp->data);
            temp=temp->next;
          }
}


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
 
 display(head);

     
}
