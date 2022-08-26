#include<bits/stdc++.h>
using namespace std;
/*
constructor in multiple inheritance, 
    -base classes are constructed in the order in which they appear in class declaration

Constructor in multi-level inheritance 
    = the constructors are executed in the order of inheritance




*/



class Base1{
    int data;
    public:
        Base1(int a){
            data = a;
            cout<<"Base1 constructor called"<<endl;
        }
        void display1(){
            cout<<"Base1 data: "<<data<<endl;
        }
};
class Base2{
    int data;
    public:
        Base2(int a){
            data = a;
            cout<<"Base2 constructor called"<<endl;
        }
        void display2(){
            cout<<"Base2 data: "<<data<<endl;
        }
};
class Derived : public Base1,public Base2{
    int derived1 , derived2;
    public:
        Derived(int a, int b,int c , int d):Base1(a),Base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"Derived constructor called"<<endl;
        }
        void derived_display(){
            Base1::display1();
            Base2::display2();
            cout<<"Derived1 data: "<<derived1<<endl;
            cout<<"Derived2 data: "<<derived2<<endl;
        }
};


int main()
{
    Derived d1(10,20,30,40);
    // d1.display();

    d1.derived_display();
    // d1.display2();
    // d1.display1();
    return 0;
}