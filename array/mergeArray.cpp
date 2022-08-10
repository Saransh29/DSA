
#include<iostream>

using namespace std;
void mergeArray(int arr1[],int arr2[],int size1, int size2,int arr3[])
{
    
    int i=0,j=0,k=0;
    while (i<size1&&j<size2)
    {
        if (arr1[i]<arr2[j])
            arr3[k++]= arr1[i++];

        else{arr3[k++]=arr2[j++];}

    while (i<size1)
        arr3[k++]=arr1[i++];
    while (j<size2)
        arr3[k++]=arr2[j++];
}
}
/*
void Mergesort(int arr[],int n)
{     
    
	if(n<=1)
        return;
    int mid=n/2;
    int part1[500],part2[500];
    int size1=mid,size2=n-mid;

    for(int i=0;i<mid;i++)
        part1[i]=arr[i];
    int k=0;
    
    for(int i=mid;i<n;i++){
        part2[k]=arr[i];
        k++;
    }
        

    Mergesort(part1,size1);
    Mergesort(part2,size2);
    mergeArray(part1,part2,size1,size2,arr);
    
} */  
int main()
{
    int size1,size2;
    cin>>size1;
    int input1[100],input2[100],output[100];
    for(int i=0;i<size1;i++){
        cin>>input1[i];
        }
    cin>>size2;
    for(int i=0;i<size2;i++){
        cin>>input2[i];
        }

    mergeArray(input1,input2,size1,size2,output); 
    for(int i=0;i<size1+size2;i++){
        cout<<output[i];
        }
    return 0;
    
}


