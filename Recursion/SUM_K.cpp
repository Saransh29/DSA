#include<iostream>
#include<vector>

using namespace std;

void printS(int ind,vector<int> &v,int s ,int sum,int arr[],int n)
{   
    
    if(ind==n)
    {   
        if(s==sum)
        {
        
        for(auto it : v)
        cout<< it << " ";
        cout<<endl;
        }
        return; 
    }
   

v.push_back(arr[ind]);
s += arr[ind];

printS(ind+1,v,s,sum,arr,n);

s -= arr[ind];
v.pop_back();

printS(ind+1,v,s,sum,arr,n);



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
    int sum;
    cin>>sum;
    vector<int> v;
    printS(0,v,0,sum,arr,n);
    // for (auto it = v.begin(); it != v.end(); it++)
    //   cout << *it << " ";

    return 0;


}

