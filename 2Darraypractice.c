#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
                //*********concept**********//
                // in C there is no "bool" concept so we use "stdbool.h"--> header files;

                //*****concept*******//
                // in C there is no INT_MIN difinition for use INT_MIN we use #include <limits.h> --->header files; 

 int m;

bool search(int array[][m],int row,int col,int target)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(array[i][j]==target)
            {
                return 1;
            }

            
        }
    }
    return 0;
}

// code for sum of elemets in array....
void sum(int arr[][m],int row,int col)
{
   for(int i=0;i<row;i++)
   {   int sum=0;  // here sum is defined so that when outer for loop "i" updated then sum started is sum=0;
      for(int j=0;j<col;j++)
         {
          sum=sum+arr[i][j];
        }

      printf("sum of row is %d\t",sum);
   }
}

// code for largest sum in row....

 int largest_sum(int arr[][m],int row,int col)
 {
    int max= INT_MIN;
    int rowindices;
    
    for(int i=0;i<row;i++)
    {  int sum=0;
        for(int j=0;j<col;j++)
        {
            sum=sum+arr[i][j];
        }

        if(sum>max)
        {
            max=sum;
            rowindices=i;
        }
    }

    printf("largest sum of elements of array is%d\t ",max);
    return rowindices;
 }



//code for main funtion.....
int main()
{   int n,m;
    printf("enter value of n  ");
    scanf("%d",&n);
    printf("enter value of m   ");
    scanf("%d",&m);
    int arr[n][m];
    
    printf("enter elements in array\t");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("elements of array is \t  ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf(" %d \t",arr[i][j]);
        }
    }

    printf("\n");
    
    int target;
    printf("enter the value of target   ");
    scanf("%d",&target);
    
    if(search(arr,n,m,target)==1)
    printf("our target elements is present in array \n");
    else{printf("target not found\n");}

    sum(arr,n,m);
    
    int rowis=largest_sum(arr,n,m);
    printf("row indices is %d\t  ",rowis);
    return 0;
}
