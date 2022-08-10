#include<iostream>

using namespace std;
void sorting(int arr[],int n)
{   
    int i;
    for(i=0;i<n;i++)
    
        if(arr[i]>arr[i+1])
           swap(arr[i],arr[i+1]);
    return;
         
    
}   
int main()
{
    int n,x;
    cin>>n;
    int arr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }

    sorting(arr,n); 
    for(int i=0;i<n;i++){
        cout<<arr[i];
        }
    return 0;
    
}
