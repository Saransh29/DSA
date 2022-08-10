#include<iostream>
using namespace std;
int power(double x,int n)
{   
    
     if(n<0)
        n=-1*n;
        x=1/x;
    while(n>0)
        if(n%2==1){
            x=x*x;
            n=n-1;
        }
        else {
            x=x*x;
            n=n/2;
        }
    if(n<0)
    return x;
    
}
int main()
{
    int n,x;
    cin>>n>>x;
   cout<<power(n,x);
    
}