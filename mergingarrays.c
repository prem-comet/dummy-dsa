#include <stdio.h>

// function for merging of arrays;
 void mergearray(int array1[],int array2[],int size_n1,int size_n2)
  {  int i,j;
    if(size_n1 > size_n2)
    { 
        for( i=size_n1,j=0;i<size_n1+size_n2, j<size_n2;i++,j++)
         {
            array1[i]=array2[j];

        }

           for(i=0,j=0;i<size_n1+size_n2,j<size_n2;i++,j++)
            {
               printf("%d%d  ",array1[i],array2[j]);
            } 

   
    }
    else
     {
          for(j=size_n2,i=0; j<size_n1+size_n2,i<size_n1;j++,i++)
           {
             array2[j]=array1[i];
           }

         for(i=0,j=0;j<size_n1+size_n2,i<size_n2;i++,j++)
            {
               printf("%d%d\t",array1[i],array2[j]);
            } 

    
    }
  
    

  }
  
  // code for function for main...

int main()
{ int n1,n2;
  printf("enter size of array1 ");
  scanf("%d",&n1);
  int arr1[n1];
  printf("enter size of array2 ");
  scanf("%d",&n2);
  int arr2[n2];
  printf("enter elements in array1 ");
  for(int i=0;i<n1;i++)
   {
     scanf("%d",&arr1[i]);
   }
   printf("enter elements in array2 ");
   for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    mergearray(arr1,arr2,n1,n2);

    return 0;

}