// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

vector<int>intersection_ans(int arr[],int n,int brr[],int m)
{
    int i=0;
    int j=0;
    vector<int>ans;
    while(i<n && j<m)
    {
        if(arr[i]<brr[j])
        {
            i++;
        }
        
        if(brr[j]<arr[i])
        {
            j++;
        }
        
        if(arr[i]==brr[j] || arr[i]!=ans.back())
        {
            ans.push_back(arr[i]);
            i++;
            j++;
        }
        
        if(arr[i]==brr[j] || arr[i]==ans.back())
        {
            i++;
            j++;
        }
    }
    
    return ans;
}







int main() {
    // Write C++ code here
   int arr[8]={2,3,5,5,6,7,7,8};
   int brr[6]={1,4,4,7,8,8};
   
   vector<int> intersection=intersection_ans(arr,8,brr,6);
   for(auto it:intersection)
   {
       cout<<"elements of intersection array is"<<it<<endl;
   }

    return 0;
}