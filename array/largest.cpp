#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
    int max=INT_MIN;
    for(int j=1;j<=n;j++)
    {
        if(arr[j]>max)
            max=arr[j];
    }  
    /* for(int i=0;i<n;i++){
        cout<<arr[i];
        }
    */    
    cout<<max;
    return 0;
    
}
