#include <stdio.h>
#include <unistd.h>

int main()
{   int n;
    int delay = 10000000000; // time for delaying letters in microseconds 
    printf("array size is ");
   scanf("%d",&n);
   int arr[n];
   printf("enter elements in array\n ");
   for(int i=0;i<n;i++)
    {
       scanf("%s",&arr[i]);
    
    }

    
   for(int j=0;j<n;j++)
    {
        printf("%c",arr[j]);
        usleep(delay);
   }
   




    return 0;
}