#include <stdio.h>
#include <stdlib.h>


// function for array length;
  int arrlen(int arr[],int length)
   {  int i=0;
      do
      {
        length=length +1;
        i++;
      }
      while (arr[i]!=NULL);
      return length;
    }

 // function for new array which is created by inserting new element in array;
  int new_array(int array[20],int number,int length_arry)
  { int i=length_arry;
     while(i>=0) 
      {
        array[i]=array[i-1];
        i--;

    }
    array[0]=number;
  // now we display or print new array;
   for (int i=0;i<=length_arry;i++)
    {
        printf("%d  ",array[i]);
    
    }

    return array;

  }


  // main funtion start ffrom here;
int main()
{   
    int l=0,ar[20];
   int arr[20]= {1,15,489,52,74,62,45,36};
    // length of array is represented by l;
    int array_lenght=arrlen(arr,l);
    printf("array length is %d",array_lenght);
    
    //2. now we use array length in to insert the elements in array;
    int n;
    printf("elements which is inserted  ");
    scanf("%d",&n);
    new_array(arr,n,array_lenght);

    

    return 0;
}