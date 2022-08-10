#include<iostream>

using namespace std;
void selectionsort(int arr[],int n)
{   
    for(int j=0;j<n-1;j++)
    {
    int min=arr[j],minIndex=j;
    for(int i=j+1;i<n;i++)
    
        if(arr[i]<min){
            min=arr[i];
            minIndex=i;
        }
    //swap       
    int temp=arr[j];
    arr[j]=arr[minIndex];
    arr[minIndex]=temp;     
    }
    
}   
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }

    selectionsort(arr,n); 
    for(int i=0;i<n;i++){
        cout<<arr[i];
        }
    return 0;
    
}
