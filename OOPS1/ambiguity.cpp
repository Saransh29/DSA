#include<bits/stdc++.h>
using namespace std;

//ambiguity resolution

class Base1{
    public:
        void greet()
        {
            cout<<"inside base 1"<<endl;
        }
};
class Base2{
    public:
        void greet()
        {
            cout<<"inside base 2 "<<endl;
        }
};
class derived : public Base1,public Base2{
    public:
        void greet()
        {
            //both can be called  oR single can be called
            Base1::greet();
            Base2::greet();     
        }
};

int main()
{   
    derived d1;
    d1.greet();

    return 0;
}