#include <stdio.h>


void transitionpoint(int array[],int size)
{
    for(int i=0;i<size;i++ )
    {
        if(array[i]==1)
        {
            printf("transition point is %d\t",i);
            break;
        }

       
    }

    
}







//code for main function....
int main()
{
    int n;
    printf("enter size of array\t");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements in array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    transitionpoint(arr,n);

    return 0;
}  