#include<bits/stdc++.h>
using namespace std;

int cnt = 0;

//destructor doesn't take an arguement and doesn't return anything
class num{
    // static int count;
    public:
    num(){
        cnt++;
        cout<<"constructor called for obj num"<<cnt<<endl;
    }
    ~num(){
        cout<<"destructor called for obj num"<<cnt<<endl;
        cnt--;

    }
};
// int num::count ;
 
int main()
{
    cout<<"creating n1"<<endl;
    num n1;
    {
        cout<<"entering block"<<endl;
        num n2,n3;
        cout<<"exiting block"<<endl;
    }
    cout<<"back to main"<<endl;


    return 0;
}