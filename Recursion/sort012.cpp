#include<iostream>
using namespace std;


/*
void sort_012(int arr[],int n) {
        int count0=0,count1=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                count0++;
            }
            else if(arr[i]==1)
            {
                count1++;
            }
            }
            for(int i=0;i<n;i++)  
            {
                if(i<count0)
                {
                    arr[i]=0;
                }
                else if(i>=count0 && i<count0+count1)
                {
                    arr[i]=1;
                }
                else
                {
                    arr[i]=2;    
                }
            }
        }
        
        
        
    }*/
    void sort_012(int arr[],int n) {
        int lo=0,mid=0,hi=n-1;
        while(mid<=hi)
        {
            if(arr[mid]==0)
            {
                swap(arr[lo],arr[mid]);
                lo++;
                mid++;

            }
            else if(arr[mid]==1)
            {
                mid++; 
            }
            else
            {
                swap(arr[mid],arr[hi]);
                hi--;

            }
                
        }
    }
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }

    sort_012(arr,n); 
    for(int i=0;i<n;i++){
        cout<<arr[i];
        }
    return 0;
}
 