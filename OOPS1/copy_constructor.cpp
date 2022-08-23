#include<bits/stdc++.h>
using namespace std;

class number
{
    int num;
    public:
        number(){}
        number(int n)
        {
            num = n;
        }
        number( number &obj) // copy constructor
        {   
            cout<<"copy constructor called"<<endl;
            num = obj.num;
        }
        void display()
        {
            cout<<"num: "<<num<<endl;
        }

}; 

int main()
{
    number n1(5);
    n1.display();

    number n2(n1);
    n2.display(); 
    return 0;
}