#include<bits/stdc++.h>
using namespace std;
/*
// Polymorphism - many forms of one function


Polymorphism is the ability of a message to be displayed in more than one form.
    - Compile time polymorphism(can be achieved using)
        - Function overloading
        - Operator overloading
    - Run time polymorphism (can be achieved using)
        - Virtual functions
        - Abstract classes



*/
//pointer to derived classes 

class Base{
    public:
    int var_base;
    void display()
    {
        cout<<"display base class var_base : " <<var_base<<endl;
    }

};
class Derived : public Base{
    public:
    int var_derived;
    void display()
    {
        cout<<"display base class var_base : " <<var_base<<endl;
        cout<<"display base class var_derived : " <<var_derived<<endl;
    }
};

int main()
{

    Base *baseclass_ptr;
    Base obj_base;
    Derived obj_derived;

    baseclass_ptr = &obj_derived;  //pointing base class pointer to derived class

    baseclass_ptr->var_base = 10;
    // baseclass_ptr->var_derived = 10; // can't be accessed

    baseclass_ptr->display();
    cout<<endl;


    Derived *derivedclass_ptr;
    derivedclass_ptr = &obj_derived;

    derivedclass_ptr->var_base = 20;
    derivedclass_ptr->var_derived = 20;
    derivedclass_ptr->display();  //derived class display function is called
                                //this decision is made during runtime

    return 0;
}