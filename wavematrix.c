#include <stdio.h>

// globally defined function....
  int n,m;

  // function definition for wave matrix elements ....

  void wave_matrix(int arr[][m],int row, int col)
  {
     for(int j=0;j<m;j++)
     {
        if(j&1)  // here concept of bitwise operator is that when j&1 ka result true aayega ya "1" aayega to hi if ki condition chalegi ....
        {
            for(int i=n-1;i>=0;i--)
            {
                 printf("%d\t",arr[i][j]);
            }
        }
        else
        {  
             for(int i=0;i<n;i++)
            {
                printf("%d\t",arr[i][j]);
            }
           
        }
        
     }
  }


// code for main function.....
int main()
{   printf("eneter n   ");
    scanf("%d",&n);
    printf("enter m   ");
    scanf("%d",&m);
    int arr[n][m];
    printf ("eneter elements in array\t");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    // print array elements....
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d\t",arr[i][j]);
        }
    }

    // function call for print elements of arrray in wave form.....

   printf("\n\n");
    wave_matrix(arr,n,m);



    return 0;
}