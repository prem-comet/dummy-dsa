                     //   ~~~Jai Mata Di~~~
                      //  Casino game part 2
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
# define array_size 10

// code for function declaration......
 void game(int* array,int size,int choice )
     {  
         
            if(array[choice]==choice)
          {
             printf("((((((((((((***CONGRATULATION SIR YOU WON***))))))))))))\n");

          }

         else
          {
            printf("^^^^^^^^^^SORRY SIR YOU LOOSE^^^^^^^^^\n");
            printf("~~~~~~~try once more SIR~~~~~~~~~\n");

          }

        
    }

 // code for Money calculation.........
  int money(int* array,int size,int choice,int Deposite_Money)
   {
        int Your_cash;
            if(array[choice]==choice)
          {
            Your_cash=3*Deposite_Money;
           
            return Your_cash;

          }

         else
          {
            Your_cash=Your_cash/2;
            return Your_cash;

          }

   }




 // code for main function ........

int main()
{   int arr[10];
    int Balfirst[3]={0};
    int Deposite_Money;
    printf("entered your cash money\t");
    scanf("%d",Deposite_Money);

    srand(time(NULL));

    for(int i=0;i<10;i++)
    {
        arr[i]=i;
    }

    // code for swappinging elements with array indices.
    for(int i=array_size-1;i>0;i--)
    {   
        int j=rand()%(i+1);  //(code for swapping indeces)
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

 for(int s=0;s<3;s++)
 {
  int choice;
  printf("*******entered your choice sir*********\t");
  scanf("%d",&choice);
  game(arr,array_size,choice);
   Balfirst[s]=money(arr,array_size,choice,Deposite_Money);
 } 
 int money=Balfirst[0]+Balfirst[1]+Balfirst[2];
 printf("<<<<<<<<<<<YOUR CURRENT BALANCE IS>>>>>>>>>>>>\t",money);
  
  



    return 0;
}