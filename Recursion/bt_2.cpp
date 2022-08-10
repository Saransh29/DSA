#include<iostream>
using namespace std;

//backtracking

void sum(int i,int N)
{
    if(i>N){
        return;
    }
    sum(i+1,N);
    cout<<i<<endl;

}
int main()
{
    int n;
    cin>>n;
    sum(1,n);
    
}
