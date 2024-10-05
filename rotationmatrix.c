#include <stdio.h>
         //  ***** matrix roted by 90 degree****//
         //   complete code....//
// globally defined variables....
int n,m;

// function definitionn......
void rotation_matrix(int arr[][m],int row,int col)
{
    for(int j=0;j<m;j++)
    {
        for(int i=n-1;i>=0;i--)
        {
            printf("%d\t",arr[i][j]);
        }
    }
}





//code for main function.....
int main()
{ 
   printf("enter n value  ");
   scanf("%d",&n);
   printf("enter value of m  ");
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
   rotation_matrix(arr,n,m);



    return 0;
}