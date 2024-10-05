#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

 // globally define structure of function;
   struct node
     {  int data;
        struct node *next;

    } ;


// 1. code for create circular linked list
   struct node *create(struct node *ptr,int number)
       {  int i;
        struct node *temp,*newnode;
           for( i=0;i<number;i++)
             {   newnode = (struct node*)malloc(sizeof (struct node));
               printf("enter data in node ");
               scanf("%d",&newnode->data);
                  newnode->next=NULL;
               if(ptr==NULL)
                {  
                   temp=ptr=newnode;

                }
               else
                {  temp->next=newnode;
                   temp=newnode;
                }
                    

            }
         temp->next=ptr;  

        return ptr;
      }

// display of code
    
    void display(struct node* ptr)
        {  struct node *temp;
              temp=ptr;
              while(temp->next!=ptr)
              {
                  printf("%d",temp->data);
                  temp=temp->next;
                  
              }
        if(temp->next=ptr)
            {            
                printf("%d",temp->data);
            }

              
        }

 // 3: code for insert node at begin

    struct node *insert_begin(struct node*ptr)
      {   
        struct node *temp,*newnode;
        temp=ptr;
        newnode=(struct node*)malloc(sizeof (struct node));
        printf("\nenter the data of new node");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        while(temp->next!=ptr)
          {  
            temp=temp->next;
              
          }
        newnode->next=ptr;
        temp->next=newnode;
        ptr=newnode;

        return ptr;

    }
  // 4: code for insert node at end in circular linked list;
    struct node *insert_end(struct node *ptr)
     {  struct node *temp,*newnode;
        newnode = (struct node*)malloc(sizeof (struct node));
        temp=ptr;
        while(temp->next!=ptr)
          { temp=temp->next;
            
        }
      
      temp->next=newnode;
      newnode->next=ptr;

       return ptr;


    }

    //5: insert node in nth positon in circular linked list;
      struct node *insert_position(struct node *ptr,int pos)
         {
            struct node *temp,*newnode;
            newnode=(struct node*)malloc(sizeof (struct node));
             temp=ptr;
             int i;
            do
             {
                temp=temp->next;
            } while (i<pos-1);
            newnode->next=temp->next;
            temp->next=newnode;
            return ptr;
            
        };

   // 6: code for delete node from beginning from circular linked list ;
      struct node *delete_begin(struct node *ptr)
       {    struct node *newnode,*temp,*previous;
         previous=temp=ptr;
          do
           {  temp=temp->next;
           } while(temp->next!=ptr);
           temp->next=ptr->next;
           ptr=previous->next;
           free (previous);

           return ptr;
        
        
        }

  // 7: delete node from end in circullar linked list; 
     struct node *delete_end(struct node *ptr)
      {  struct node *newnode,*temp,*previous;
          previous=temp=ptr;
          while(temp->next!=ptr)
             {  previous=temp; 
                temp=temp->next;
            }
            previous->next =ptr;
            free(temp);
             return ptr;


        }
    
    //8: code  for delete node from any position;
      struct node *delete_position(struct node *ptr,int l)
      {  struct node *newnode,*temp,*previous;
        temp=ptr;
        previous=NULL;
        for(int i=1;i<l;i++)
        {   previous=temp;
           temp=temp->next;
        } 
        previous->next=temp->next;
        free(temp);
        
        return ptr;


    }


 
int main()
{  int n,pos,l;
    
    struct node *head,*h1,*h2,*h3;
    int option;
    printf("enter no of nodes");
    scanf("%d",&n);
    h1= create(head,n);

    do
    {   
       
       printf("2. display circular linked list\n");
       printf("3.  insert node at begin circular linked list\n");
       printf("4. insert node at end in circular linked list\n");
       printf("5. insert node in any position\n");
       printf("6. delete node at begin\n");
       printf("7. delete node at end \n");
       printf("8. delete node from any position");
       printf("9. exit\n");
       
       printf("choose option");
       scanf("%d",&option);

       
        
      
       switch(option)
         { 
             
         case 2:  display(h1);
                    break;
         case 3:   h3=insert_begin(head);
                   display(h3);
                    break;
         case 4:   insert_end(head);
                    break;
         case 5:   printf("enter position\n");
                   scanf("%d",&pos);
                   h3= insert_position(head,pos);
                     break;
         case 6:  delete_begin(head);
                    break;
         case 7:  delete_end(head);
                     break;
         case 8:  delete_position(head,l);
                  display(delete_position(head,l));
                    break;
         


        }
    } while(option!=9);
       
     

      





   return 0;
}