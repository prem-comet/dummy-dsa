#include <stdio.h>
int n;
int flag;
int main() {
   int arr[7]={4,5,2,7,3,9,1};
   for(int i=0;i<n;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           if(arr[i]>arr[j])
           {
               flag=7-i-j;
               continue;
           }
           
           else{break ;}
           
      }
      
     if(flag==1)
     {
         printf("%d/n",arr[i]);
     }
   }
    return 0;
}