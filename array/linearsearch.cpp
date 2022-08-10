#include<iostream>

using namespace std;
int linearsearch(int arr[],int n,int x)
{   
    int i;
    for(i=0;i<n;i++)
    
        if(arr[i]==x)
            return i;
         
     return -1;
    
}   
int main()
{
    int n,x;
    cin>>n>>x;
    int arr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }

    int result =linearsearch(arr,n,x);
    cout<<result;
    return 0;
    
}
