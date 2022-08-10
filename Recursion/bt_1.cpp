#include<iostream>
using namespace std;

void print_1toN(int i,int N)
{
    if(i<1){
        return;
    }
    print_1toN(i-1,N);
    cout<<i<<endl;

}
int main()
{
    int n;
    cin>>n;
    print_1toN(n,n);
    
}
