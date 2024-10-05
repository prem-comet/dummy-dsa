#include <stdio.h>
int main()
{  int n;
  printf("enter size of array   ");
  scanf("%d",&n);
  int arr[n];
  printf("enter elements in array  ");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }

   // int  min = arr[0];
   for(int j=1;j<n;j++)
     {
        if (arr[j]<arr[0])
          { 
            arr[0]=arr[j];
          }
       else 
       {
         continue;
        }
        
    }

    printf("smallest element is %d  ",arr[0]);

    return 0;
}