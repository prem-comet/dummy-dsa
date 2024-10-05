
#include <stdio.h>
#include <stdlib.h>


 int missingNumber(int array[], int n) {
    int flag=0;
    int i;
    for ( i=1;i<=n+1;)
     {  for(int j=0;j<n;j++)
          {
             if(array[j]==i)
              {
                i++;
               }
             else 
             {  flag=1;
                 continue;
             }
            
             
             
          }  
        
         
    }
        
        if(flag==1)
        {
            return i;
        }
         
         
         
         
         
         
}
     
    
     
     
     


int main()
{  int h;
   int array[7]={2,5,6,4,3,1,8};
   h=missingNumber( array,  7);
  printf("%d/n",h);

    return 0;
}

