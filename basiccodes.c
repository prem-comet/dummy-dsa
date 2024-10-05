#include <stdio.h>

int fun_avg(int array[],int size)
{
  int sum=0;
  
 for(int j=0;j<size;j++)
  {
    sum=sum+array[j];
    
  } ;
  
  return sum;
  
  

};

int main()
{  int arr[20];
    int n,i;
   printf("enter value of n\n");
   scanf("%d",&n);
   printf("enter elements in array\n");
   for (i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    };
   
  int h=fun_avg(arr,n);
  float a=h/n;
  printf("%f is average of n numbers", a);

   return 0;
}