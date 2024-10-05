               //     ********ROCK PAPER SCISSOR game*********
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{  
   srand(time(NULL)); 
   int choice;
   char arr[]={'s','r','p'};
   int len_array=sizeof(arr)/sizeof(arr[0]);
   int  random_number=rand()%len_array;
   char random_input=arr[random_number];
   int i=1;
  while(i<=3)
    {   printf("1. s\n 2. r\n 3. p\n");
        printf("your choice\t ");
        scanf("%d",&choice);
      
      switch(choice)
        {
           case 1: if (random_input=='s')
                     {
                        printf("tie match\n");
                    }
                   else if(random_input=='r')
                    {
                        printf("you loose\n  ");
                    }
                   else{printf("you won\n  ");}
                        break;
          case 2: if (random_input=='p')
                    {
                        printf("you loose\n");
                    }
                  else if(random_input=='r')
                   {
                     printf("tie match\n");
                   }
                   else{printf("you won");}
                       break;
          case 3: if(random_input=='r')
                   {
                    printf("you won\n");
                   }
                 else if(random_input=='p')
                 {
                    printf("tie match\n ");
                 }
                 else{ printf("you loose\n");}
                    break;
        }
   
     i++;
    }
 return 0;
}