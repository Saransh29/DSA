
#include<iostream>

using namespace std;
void mergeArray(int array3[],int size1, int size2)
{
    
    int array1[500];
    int array2[500];
    for (int i=0;i<size1; i++ )
        array1[i]= array3[i];
    for (int i=0;i<size2; i++)
        array2[i]= array3[i+size1];
    int i=0,j=0,m=0;
    while (i<size1&&j<size2)
    {
        if (array1[i]<array2[j])
           array3[m++]= array1[i++];
        else{array3[m++]=array2[j++];}
        
    }
    while (i<size1)
    array3[m++]=array1[i++];
    while (j<size2)
        array3[m++]=array2[j++];
}

void Mergesort(int arr[],int n)
{       
    int array3[n];
	if(n==1)
        return;
    Mergesort(arr,n/2);
    Mergesort(arr+n/2,n-n/2);
    mergeArray(arr,n/2,n-n/2);
    
}   
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }

    Mergesort(arr,n); 
    for(int i=0;i<n;i++){
        cout<<arr[i];
        }
    return 0;
    
}


