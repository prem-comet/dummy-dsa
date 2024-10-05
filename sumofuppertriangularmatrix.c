#include <stdio.h>
// globally defined variables or array
    int n;

//  **************concept is here that****************
/* when we pass size of coloumn in 2d array in function declaration then care must be taken that column size 
is declared .....if you take the size of 2d array from user then you will pass size of array in function
 call but in function declaration data type of array coloumn which is taken by user should be write but we can't
 write data type in array size like boid fun(arr[][n],int size) this will show error because n is not defined
 here in funtion it is defined in  main funtion so to use the size of array in functionn declaration 
  we should define the size of array ......globally .......like you can see we define int n, below "header files"
  
  now we can take the value of n from user in main funtionn and you can pass n in any function declaration or definition
   and value of n is used in funtion declaration or definition is take which is taken by user..... */
    
// now we write a code for function declaration or function definition

void sumuptrimat(int array[][n],int size)
 {  n=n+1;
    int sum=0;
    for(int l=0;l<size;l++)
     {
       for(int p=l;p<size;p++)
        {
            sum=sum+array[l][p];

        }
    }
    printf("sum of upper triangular matrix is %d\t",sum);


}

// code for sum of elements of lower triangular matrix ......
 void sumlowtrimat(int array[][n],int size)
 { // n=n+1;
     int sum=0;
    for(int l=0;l<size;l++)
     {
       for(int p=0;p<=l;p++)
        {
            sum=sum+array[l][p];

        }
    }
    printf("sum of lower triangular matrix is %d\t",sum);
 }
// code for main function .......

int main()
{  
    printf("write the order of matrix ");
    scanf("%d",&n);
    int arr[n][n];

    printf("enter elements in matrix\n ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

  // calling function for sum of elements of upper triangular matrix
    sumuptrimat(arr,n);
    sumlowtrimat(arr,n);
    printf("updated value  of %d",n);
    //sumuptrimat(arr,n);
    //sumlowtrimat(arr,n);




    return 0;
}