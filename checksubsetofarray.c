#include <stdio.h>

void subset(int array1[],int array2[],int size1,int size2)
{  if (size2>=size1)
  {
    for(int i=0;i<size1;i++)
   {
     for(int j=0;j<size2;j++)
       {
           if(array1[i]==array2[j])
            printf("array1 is subset of array2 ");
            break;
        }
    }
  }

  else if(size1>size2)
  {
    for(int i=0;i<size2;i++)
   {
     for(int j=0;j<size1;j++)
       {
           if(array2[i]==array1[j])
            {
             printf("array2 is subset of array1 ");
             break;
            }
        }
    }
  }

  else
  {
    printf("none is subset of anyone  ");
  }
   
}





int main()
{   int n,m;
  
   printf("enter the value of n\t");
   scanf("%d",&n);
   printf("enter value of m\t");
   scanf("%d",&m);
    int arr1[n],arr2[m];

   printf("enter values of elements of first array\t");
   for(int i=0;i<n;i++)
     { 
       scanf("%d",&arr1[i]);
    }

   printf("enter the values of elements of second array\t");
   for(int j=0;j<m;j++)
   {
    scanf("%d",&arr2[j]);
   }

   subset(arr1,arr2,n,m);





   


    return 0;
}