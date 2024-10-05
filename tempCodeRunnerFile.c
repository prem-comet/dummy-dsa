#include <stdio.h>



int missingNumber(int array[], int n) {
    int flag=0;
    int num=1;
    int j;
    for( j=0;j<n;j++)
     {
             if(array[j]==num)
              {
                 num++;
               }
            else 
             {  flag=1;
                 continue;
             }
            
             
             
    }  
        
         
        
        
     if(flag==0)
        {
            return num;
        }

}
int main()
{
   int h;
   int array[]={5,4,8,6,2,1,7};
   h=missingNumber(array,7);


  return 0;
}