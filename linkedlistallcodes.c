#include <stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{  int data;
    struct node *next;

};

// code for create linked list or declaration for linked list
struct node *create(struct node *ptr,int n)
{   int i=1; 
   struct node *newnode,*temp;
   
    do
     {  
         newnode=(struct node*)malloc(sizeof (struct node));
         printf("enter data of nodes");
         scanf("%d",&newnode->data);
        if( ptr==NULL)
         { 
           temp=ptr=newnode;
        }
       else
         { temp->next=newnode;
           temp=temp->next;
        } 
       temp->next=NULL;
        i=i+1;

    
    

    } while(i<=n);
   return ptr;


}

//code for display of linked list
 void display(struct node *ptr)
 { struct node *temp;
    temp=ptr;
    while(temp->next!=NULL)
     { printf("%d\t",temp->data);
        temp=temp->next;

    }
    if (temp->next==NULL)
      { printf("%d\t",temp->data);
      }
}

// code  for insert node at begining

struct node *insertbegin(struct node *ptr)
 {   struct node *temp,*newnode;
      newnode=(struct node*)malloc(sizeof (struct node));
      printf("enter data in new node");
      scanf("%d",&newnode->data);
          newnode->next=0;
      temp=ptr;
      newnode->next=temp->next;
      temp->next=newnode;


      return ptr;

}

// code for insert at end 

struct node *insertend( struct node *ptr )
 { struct node *temp,*newnode;
    newnode=(struct node*)malloc(sizeof (struct node));
    printf("enter data in new node");
    scanf("%d",&newnode->data);
           newnode->next=NULL;
   
   do
     { temp=ptr;
        temp=temp->next;

    } while(temp->next!=NULL);

    temp->next=newnode;

     return ptr;
     
  
}

// code of insert node at any position expect at begining and end 
  
  struct node *insertposition(struct node*ptr,int pos)
     {   
        struct node *newnode,*temp;
        newnode=(struct node*)malloc(sizeof (struct node));
        printf("enter data in node");
        scanf("%d",&newnode->data);
          newnode->next=NULL;
      temp=ptr;
      int i=1;
       do
         {  
            temp=temp->next;
             
        } while (i<pos-1);

        newnode->next=temp->next;
        temp->next=newnode;
       

       return ptr;
       
}

// code for delete node

struct node *deletenodebegin(struct node *ptr)
 {  struct node*temp;
    temp=ptr;
    ptr=ptr->next;
    free(temp);

    return ptr;

   
}

//delete node from end

struct node *deletenodeend(struct node*ptr)
 {  struct node*temp,*previous;
    previous=ptr;
    temp=previous->next;
    while(temp->next!=NULL)
     {  previous=temp;
        temp=temp->next;
    }
    previous->next=NULL;
    free(temp);
   
   return ptr;
       
}

// code for delete node from any position

struct node *deletenodeposition(struct node *ptr, int pos)
 {   struct node *previous,*temp;
     previous=ptr;
     temp=previous->next;
    int i=1;
    while(i<pos-1)
     {
        previous=temp;
        temp=temp->next;
    } 

    previous->next=temp->next;
    free(temp);

    return ptr;

}










// main function start from here
int main()
{  struct node *head,*h1,*h2,*H;
    int n,ch,m,l;
    printf("1. create node\n");
    printf("2. display linked list\n");
    printf("3. insert at begining\n");
    printf("4. insert at end\n");
    printf("5. insert at any position\n");
    printf("6. delete node from begining\n");
    printf("7. delete node from end\n");
    printf("8. delete nodde from any position\n");

    printf("choose an option  ");
    scanf("%d",&ch);
    
    switch(ch)
    { case 1:    printf("enter no.of nodes\n");
                 scanf("%d",&n);
                 H=create(head,n);
                 display(H);
                  break;
      //case 2: display(create(head,n)); 
                break;
      case 3:  h1=insertbegin(H);
               // display();
                break;
      case 4:  h2=insertend( insertbegin(head));
                // alternate way to write of upper line----- h2=insertend( h1);
                break;
      case 5:   printf("enter position");
                scanf("%d",m);
                insertposition(head,m);
                break;
      case 6:  deletenodebegin(head);
                break;
      case 7:  deletenodeend(head);
                break;
      case 8:   printf("enter node position deleted");
                scanf("%d",&l);
                deletenodeposition(head,l);
                break;
     default: { exit(1);}

    
    }   





 return 0;
}