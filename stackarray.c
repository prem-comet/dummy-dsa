#include <stdio.h>
#include <stdlib.h>
#define N 6
int st[N];
int top=-1;


// ###### function declaratio or defination ####### //
 void push(int st[],int p)
 {   if(top==N-1)
         { printf("stack is overflow\n");
        }
    else
     {  
             top++;
         st[top]=p ;
        
        
         
    }
}

// 2. code for display

void display(int st[])
 {
   if(top==-1)
     {  printf("stack is empty\n");
    }
   else
     {  while(top!=-1)
         {
            printf("%d\n",st[top]);
         top--;
         printf("\n ");

        }
         
    }

     
}

// 3.  code for pop 

  int pop(int st[])
     {  int val;
        if(top==-1)
         {  printf("stack is underflow condition  ");
        }
        else
         {  val = st[top];
             top--;
            return val;
        }

    }
  
  // 4. code for peek
   int peak(int st[])
     {  int store_variable; 
        if(top==-1)
            {
                printf("stack is empty ");
            }
        else
         {  
           store_variable=st[top];
           return store_variable;

        }


    }


    
    
   
     

// main function start from here .........

int main()
{    int option;
   int x,l,m,n;
   do
   {
     printf("******choose your choice*******\n");
     printf("1. select push \n");
     printf("2. select display \n");
     printf("3. select pop \n");
     printf("4.  select peek \n");
     printf("5. EXIT\n");
     printf("enter your option  ");
     scanf("%d",&option);


     switch(option)
     {
        case 1:   printf("enter number of elements which is pushed  ");
                  scanf("%d",&x);
                  push(st,x);
                  break;
        case 2:   display(st);
                    break;
        case 3:   pop(st);
                   break;
        case 4:   peak(st);
                  break;
        
    }
   } while (option!=5);
    

    return 0;
}
