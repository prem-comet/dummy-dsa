#include <stdio.h>
#include <stdlib.h>
#include <time.h>
# define array_size 10
int main()
{   int arr[10];

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
 // code for print the scrambling elements of array;
      int l=0;
   do
   {
    printf("%d",arr[l]);
    l++;
   } while (l<array_size);
   
  



    return 0;
}