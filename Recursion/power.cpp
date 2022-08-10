#include<iostream>
using namespace std;

double Power(double x, int n) {
    
    if(n==0){
        return 1;  
    } 
    if (n<0){
        x=1/x;
        n=-1*n;
    }
    if(n==1)
        return x;
    
    return x*Power(x,n-1);  
    
    }
   
/*
int power(int n,int x)
{   
    if(x==0)
        return 1;
    if(x==1)
        return n;
    
    int x1=power(n,x/2);
    int x2=x1*x1;
    if(x%2==1)
        x2=x2*x;
    return x2;
} */


/*
int power(int n,int x)
{   
    if(x==0){
        return 1;
    if(x==1){
        return n;
    }
    return n * power(n,x-1);

}
*/
int main()
{
    double n,x;
    cin>>n>>x;
   cout<<Power(n,x);
    
}
