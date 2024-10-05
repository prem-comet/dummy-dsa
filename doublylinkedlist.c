#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node 
{  
    int data;
    struct node *previous;
    struct node *next;
    
  };

// 1. code for formation of for doubly linked list;
   struct node *create(struct node *ptr,int number)
      {   struct node *newnode,*temp;
        int  i=1;
           
       
               
            do
            { newnode=(struct node*)malloc(sizeof (struct node));
              printf("enter data in node\n");
              scanf("%d",&newnode->data);
               newnode->next=NULL;
               newnode->previous=NULL;  
              
              
              
              if ( ptr==NULL)
                  {
                     temp=ptr=newnode;

                }
              else
               {
                 temp->next=newnode;
                 newnode->previous=temp;
                 temp=temp->next;

              } 
              i++;
            } while(i<=number);

               return ptr;
            




      }

 // 2. code for display elements of node in doubly linked list;
     void display(struct node *ptr)
      {  struct node *temp;
         temp=ptr;
         
        while(temp->next!=NULL)
         {
            printf("%d\n",temp->data);
              temp=temp->next;
        }
        if( temp->next==NULL)    
         {
           printf("%d\n",temp->data);

        }
      }

 // 3. code for insert node in doubly linnked list;
   struct node *insert_begin(struct node *ptr)
    {
       struct node *temp,*newnode;
       newnode=(struct node*)malloc(sizeof (struct node));
       printf("enter data in nodes\n");
       scanf("%d",&newnode->data);
           newnode->previous=NULL;
           newnode->next=NULL;
      temp=ptr;

      newnode->next=temp;
      temp->previous=newnode;
      ptr=newnode;

      return ptr;

       

    }

 //4. insert at end a node in doubly linked list;

  struct node *insert_end(struct node *ptr)
    {
       struct node *temp,*newnode;
       newnode=(struct node*)malloc(sizeof (struct node));
       printf("enter data in node\n");
       scanf("%d",&newnode->data);
          newnode->previous=newnode->next=NULL;
          temp=ptr;
      do
      {
        temp=temp->next;
      } while (temp->next!=NULL);
      temp->next=newnode;
      newnode->previous=temp;

      return ptr;
      
  }

 //5. insert a node in any postionn in doubley linked list;
    struct node *insert_position(struct node *ptr,int number)
     {  int i=1;
       struct node *temp,*newnode;
       newnode=(struct node*)malloc(sizeof (struct node));
       printf("enter data in node\n");
       scanf("%d",&newnode->data);
          newnode->previous=newnode->next=NULL;
        do
        {
          temp=temp->next;
          i++;
        } while (i<number-1);
        newnode->next=temp->next;
        temp->next->previous=newnode;
        newnode->previous=temp;
        temp->next=newnode;

        return ptr;


    }

  //6. delete node from begining from doubly linked list;
    struct node *delete_begin(struct node *ptr)
     {
         struct node *temp;
         temp->next->previous=NULL;
         ptr=temp->next;

         free(temp);

         return ptr;


      }
  
  // 7. delete node from end from doubly linked list ;
   struct node *delete_end(struct node *ptr)
    {  struct node *temp;
        while(temp->next!=NULL)
         {
           temp=temp->next;
        }
         
        temp->previous->next=NULL;
        free(temp);
        
        return ptr;


    }

  //8. delete node from anny postion;
  struct node *delete_position(struct node *ptr,int number)
    {
       struct node *temp;
       int i=1;
       do
         { temp=temp->next; 
            i++;
        } while (i<number);
        temp->previous->next=temp->next;
        temp->next->previous=temp->previous->next;
        free (temp);

        return ptr;

        
     }



int main()
{  struct node *head,*h1,*h2,*h3,*h4,*h5,*h6,*h7,*h8,*h9;
  int option,n,l,m,o;
    
    do 
     {  printf("****choose your order****\n");
        printf("1. create a doubly linked list\n");
        printf("2. display elements of doubly linked list\n");
        printf("3. insert node at begining in doubly linked list\n");
        printf("4. insert at end in doubley linked list\n");
        printf("5. insert at any position a node in linked list in doubly linked list\n");
        printf(" 6. delete node from begin in doubly linked list\n");
        printf("7. delete from end node from doubly linked list\n");
        printf("8. delete node from any position from doubly linked list\n");

        printf("choose your option\n");
        scanf("%d",&option);
      
      switch(option)
        {
           case 1:  printf("enter number of nodes  ");
                    scanf("%d",&n);
                  h1=  create(head,n);
                   break;
           case 2:  display(h1);
                    break;
           case 3: h2=insert_begin(h1);
                    break;
           case 4: h3=insert_end(h2);
                    break;
           case 5: h4=insert_position(h3,l);
                      break;
           case 6: h5=insert_end(h4);
                      break;
           case 7: h6=insert_position(h1,m);
                      break;
           case 8: h7=delete_begin(h6);
                      break;
           case 9: h8=delete_end(h7);
                      break;
           case 10: h9=delete_position(h8,o);
                      break;


        }
    }while ( option!=9);






    return 0;
}

