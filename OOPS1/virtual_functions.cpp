#include <bits/stdc++.h>
using namespace std;

/*
Rules for virtual functions
1. They cannot be static
2. They are accessed by object pointers
3. Virtual functions can be a friend of another class
4. if a  virtual function defined in base class ,  there is no neccessity
    of redefining it in derived class

*/

class Base
{
public:
    int var_base;
    virtual void display() // by using virtual , if base class pointer points to derived class
                           // run the display of derived class
    {
        cout << "1 display base class var_base : " << var_base << endl;
    }
};
class Derived : public Base
{
public:
    int var_derived = 69;
    void display()
    {
        cout << "2 display base class var_base : " << var_base << endl;
        cout << "2 display base class var_derived : " << var_derived << endl;
    }
};

int main()
{
    Base *baseclass_ptr;
    Base obj_base;
    Derived obj_derived;

    baseclass_ptr = &obj_derived; // pointing base class pointer to derived class
    baseclass_ptr->var_base = 10;
    baseclass_ptr->display();  // now it will use the derived class display 
                                //  as base class display is virtual 

    return 0;
}
