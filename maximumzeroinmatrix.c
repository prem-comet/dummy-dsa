#include <stdio.h>

int j=0;


int main()
{  int n;
    int arr[20][20]={0};
    printf("enter the order of natrix ");
    scanf("%d%d",&n,&n);
    printf("enter elenents either 0 or 1 in natrix\t");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

   int count1=0,count2=0,count3=0;
   /* for(int j=0;j<n;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i][j]==0)
            {
                count1++;
            }
        }
    }*/
    
     for(int i=0;i<n;i++)
        {
            if(arr[i][1]==0)
            {
                count1++;
            }
          j++;
        }
    printf("no of zeroes is %d",count1);
    
    for(int i=0;i<n;i++)
    {
            if(arr[i][j]==0)
            {
                count2++;
            }
        j++;
    }
    return 0;
}