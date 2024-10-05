#include <stdio.h>
int main()
{   int n,p,temp; 
     printf("size of array  ");
     scanf("%d",&n);
     int arr[n];
     printf("enter elements of array\t ");
     for(p=0;p<n;p++)
      {
        scanf("%d",&arr[p]);
      } 
     for(int i=0;i<n;i++)
       {
         for(int j=i+1;j<n;j++)
           {
             if(arr[i]>arr[j])
               {
                   temp=arr[i];
                   arr[i]=arr[j];
                   arr[j]=temp;
                   
                }
              continue;
           } 

       }
       for(int l=0;l<n;l++)
        {
            printf("%d\t",arr[l]);
        } 
       

 





    return 0;
}