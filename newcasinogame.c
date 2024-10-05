 //        ~~~~~~~My first casino game project~~~~~~~

#include <stdio.h>

// 1.function declaration......
    void fun(int *arr[],int s,float deposite_money)
    {
       if(arr[s]==s)
        {  float Money=3*deposite_money;
            printf("*****CONGRATULATION SIR******\n you won the price money%f\t",Money);
        }
       else
       {
          printf("^^^^^SORRY SIR^^^^^\t you loose\n try once more SIR\n");
          float Money=deposite_money-deposite_money;
          printf("Sir your currente Balance is %f",Money);
       } 

    }

// code for total balance ......
   int fun1(int *arr[],int s,float deposite_money)
    {
       if(arr[s]==s)
        {  float Money=3*deposite_money;
            //printf("*****CONGRATULATION SIR******\n you won the price money%f\t",Money);
            return Money;
        }
       else
       {
          //printf("^^^^^SORRY SIR^^^^^\t you loose\n try once more SIR\n");
          float Money=deposite_money-deposite_money;
         // printf("Sir your currente Balance is %f",Money);
         return Money;
       } 

    }







 // code for main function......
int main()
{  int n,choice,Deposite_money;
   int array[20];
   printf("Sir please submit your Money\t");
   scanf("%f",&Deposite_money);
    printf("........Now you are ready to play this game......\n");
   printf("select onedigit number 1-7  ");
   scanf("%d",&n);
  
   
  // scanf("%d",&choice);
  // scanf("%d",&choice);
   int arr1={4,2,2,2,2,2,2,2,2,3};
   int arr2={8,6,5,9,4,2,4,6,7,8};
   int arr3={6,9,3,4,5,7,6,2,3,0};
   int arr4={9,6,5,9,8,5,2,4,6,3};
   int arr5={2,3,1,4,0,6,8,5,1,9,};
   int arr6={1,3,5,2,4,6,8,8,9,0};
   int arr7={2,2,5,4,5,5,8,7,5,9};
   int arr8={5,2,6,9,8,7,6,8,8,2};
   int arr9={3,5,3,6,5,5,8,7,7,9,};

   for(int i=n;i<n+3;i++)
    {
        switch(i)
        {
            case 1: printf("enter your choice\t");
                    scanf("%d",&choice);
                    fun(&arr2,choice,Deposite_money);
                  array[1] = fun1(&arr2,choice,Deposite_money);
                    break;
            case 2: printf("enter your choice\t");
                    scanf("%d",&choice);
                    fun(&arr3,choice,Deposite_money);
                    array[2] = fun1(&arr3,choice,Deposite_money);
                    break;
            case 3: printf("enter your choice\t");
                    scanf("%d",&choice);
                    fun(&arr1,choice,Deposite_money);
                    array[3] = fun1(&arr1,choice,Deposite_money);
                    break;
            case 4: printf("enter your choice\t");
                    scanf("%d",&choice);
                    fun(&arr4,choice,Deposite_money);
                    array[4] = fun1(&arr4,choice,Deposite_money);
                    break;
            case 5: printf("enter your choice\t");
                    scanf("%d",&choice);
                    fun(&arr8,choice,Deposite_money);
                    array[5] = fun1(&arr8,choice,Deposite_money);
                    break;
            case 6: printf("enter your choice\t");
                    scanf("%d",&choice);
                    fun(&arr9,choice,Deposite_money);
                    array[6] = fun1(&arr9,choice,Deposite_money);
                    break;
            case 7: printf("enter your choice\t");
                    scanf("%d",&choice);
                    fun(&arr7,choice,Deposite_money);
                    array[7] = fun1(&arr7,choice,Deposite_money);
                    break;
            case 8: printf("enter your choice\t");
                    scanf("%d",&choice);
                    fun(&arr5,choice,Deposite_money);
                    array[8] = fun1(&arr5,choice,Deposite_money);
                    break;
            case 9: printf("enter your choice\t");
                    scanf("%d",&choice);
                    fun(&arr6,choice,Deposite_money);
                    array[9] = fun1(&arr6,choice,Deposite_money);
                    break;

          float Remaining_balance=array[n]+array[n+1]+array[n+2];
            printf("~~~~~Your Remaining  Balance~~~~~ \t %f",Remaining_balance);

         default: printf("something is wrong please try again");
                   break;

        }
    }





    return 0;
}