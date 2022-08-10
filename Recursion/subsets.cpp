#include<iostream>
#include<vector>

using namespace std;

void printS(int ind,vector<int> ds,int arr[],int n)
{   
    
    if(ind==n)
    {   
        for(auto it : ds){
        cout<< it << " ";
        }
        cout<<endl;
        return; 
    }
   

ds.push_back(arr[ind]); 

printS(ind+1,ds,arr,n);

ds.pop_back();

printS(ind+1,ds,arr,n);



}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    vector<int> ds;
    printS(0,ds,arr,n);


    return 0;


}

