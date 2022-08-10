#include<iostream>

using namespace std;
int binarysearch(int arr[],int n,int x)
{   
    int start=0,end=n-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==x){
            return mid;
        }
            
        else if(x<arr[mid])
           {
                end=mid-1;
           }
        else
            {
                start=mid+1;
            }
    }     
    return -1;
    
}   
int main()
{
    int n,x;
    cin>>n>>x;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }

    int result = binarysearch(arr,n,x);
    cout<<result;
    return 0;
    
}
