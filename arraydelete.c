#include <stdio.h>

// function for delete elements of array;
void delete_array(int array[],int position)
{  
  for(int i=position-1;i<7-1;i++)
   {
    array[i]=array[i+1];
   }

   int p=0;
   printf("new array after deleted elements   ");
   do
   {
    printf("%d ",array[p]);
    p++;
   } while (p<6);
   

}

int main()
{  int pos;
  int arr[]={152,54,8,85,454,545,44};
  printf("before delete elements array is  ");
  for(int i=0;i<7;i++)
   { 
     printf("%d  ",arr[i]);

   }
   printf("enter position of which is deeleted elements  ");
   scanf("%d", &pos);
   delete_array(arr, pos);


}