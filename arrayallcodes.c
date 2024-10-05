#include <stdio.h>

// function for getting length;
int  getlength(int array[],int length)
    {  int i=0;
        while(array[i]!=NULL)
      {
         length++;
          i++;
      }
      return length;

    }

  // function for searching elements in array;
int search_elements(int array[],int searchednumber,int lengthnum)
      {  for (int p=0;p<lengthnum;p++)
           {
              if(array[p]==searchednumber)
              {
                return 1;
              }
       
             
       
            }
       

        }
 
// function for main function;

int main ()
{  int n;
   printf("enter size of array  ");
   scanf("%d",&n);
   int arr[n];
   int l=0;
   printf("eter elements in array  ");
   for(int i=0;i<n;i++)
    { scanf("%d",&arr[i]);
    };
    // calling for function for length;
   int len= getlength(arr,l);
   printf("length of array is %d  ",len);

   // calling for function for searching elements in array;
    int searchnum;
    printf("enter search number  ");
    scanf("%d",&searchnum);
    
    int h= search_elements(arr,searchnum,len);
    if(h==1)
      {
         printf("searched elements is present in array    ");
      }
    else { printf("searched elements is not present in array  ");}


return 0;
}