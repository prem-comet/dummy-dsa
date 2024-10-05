#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct stack
 {  int data;
    struct stack *next;

};
struct stack *top=NULL;

// code for function declaration//
   
// 1. code for create function 
 struct stack *push (struct stack *top,int data)
     {
       if(top==NULL)
          {   struct stack *newnode;
             newnode=(struct stack*)malloc(sizeof (struct stack));
             scanf("%d",&newnode->data);
            newnode->next=NULL;
             top=newnode;
        }
        else
         {
      
            struct stack *newnode;
             newnode=(struct stack*)malloc(sizeof (struct stack));
             //printf("enter data in stack");
             scanf("%d",&newnode->data);
            newnode->next=top;
             top=newnode;

        }

        return top;
    
     
    }
  //2. code for display 
  struct stack *display(struct stack *top)
     { struct stack *ptr;
       ptr=top;
        if (ptr==NULL)
         {
            printf("stack is empty ");
        }
        
       else 
         {
            while(ptr!=NULL) 
              {
                 printf("%d\n",top->data);
                 ptr=ptr->next;
             }



        }
        return top;
    }

  //3. code for pop
    int pop(struct stack *top)
     {
       struct node *temp;
       temp=top;
       top=top->next;
       free(temp);
        int a=top->data;
        return a;

    }

   // 4. code for peek

   int peek(struct stack *top)
     {
        if(top==NULL)
         {
           printf("stack is underflow  ");
        }
        else
        {
          return top->data;

        }

    }




// code for main funtion start from here;

int main()
 {  
   int opt,x,val;

   do
   {
     printf("choose your order\n");
     printf("1. push data in stack\n");
     printf("2. display stack ");
     printf("3. create pop  ");
     printf("4. create peek\n");
     printf("5. exit from function\n");

     printf("enter your option\n");
     scanf("%d",&opt);


   

       switch(opt)
         {  case 1: //printf("enter value which is pushed ");
              //scanf("%d",&x);
              top=push(top,val);
              break;
            case 2: display(top);
              break;
            case 3: pop(top);
               break;
            case 4: val=peek(top);
                    printf("%d",val);
               break;
        } 
    }while(opt!=5);

    return 0;
}