#include<iostream>
using namespace std;


int power(int n)
{
    if(n==1){
        return 1;
    }
    return n * power(n-1);

}
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        cout<<power(n)<<endl;
        t--;
    }
   
    
}
