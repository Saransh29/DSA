
#include<iostream>

using namespace std;

int partition(int arr1[],int si,int ei)

{   
    int count=0;
    for(int i=si+1;i<ei;i++)
    if(arr1[si]>=arr1[i])
        count++;
    
    swap(arr1[si],arr1[si+count]);

    int x=arr1[si];
    int i=si,j=ei;
    while(i<count&&j>count)
    {
        if(arr1[i]<x)
            i++;
        else if(arr1[j]>x)
            j++;
        else
            swap(arr1[i],arr1[j]);

    }
    return si+count;
}


void qs(int arr[],int si,int ei)
{       
    
	if(si>=ei)
        return;

    int c=partition(arr,si,ei);

    qs(arr,si,c-1);
    qs(arr,c+1,ei);


    
    
}   
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }

    qs(arr,0,n-1); 
    for(int i=0;i<n;i++){
        cout<<arr[i];
        }
    return 0;
    
}


