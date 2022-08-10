#include<iostream>
using namespace std;

int main(){

    int x;
    cin>>x;

    long r =x;
    
    while (r*r > x)
        r = (r + x/r) / 2;
        
    cout<< r;
}