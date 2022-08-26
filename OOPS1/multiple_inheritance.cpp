#include <bits/stdc++.h>
using namespace std;
// A derived class with more than one base class

//  Syntax for inheriting in multiple inheritance
// class Derived_class_name : visibility-mode base_class_1 ,visibility-mode base_class_2

//
class base_1
{
protected:
    int base_1_int;
public:
    void set_base_1_int(int a)
    {
        base_1_int = a;
    }
    void get_base_1_int()
    {
        cout << "Base 1 int: " << base_1_int << endl;
    }
};
class base_2
{
protected:
    int base_2_int;
public:
    void set_base_2_int(int a)
    {
        base_2_int = a;
    }
    void get_base_2_int()
    {
        cout << "Base 2 int: " << base_2_int << endl;
    }
};

class Derived : public base_1, public base_2
{
public:
    void show()
    {
        // getters used when base_1 , base_2 are private
        //  get_base_1_int();
        //  get_base_2_int();

        // when base_1 , base_2 are protected they can be accessed directly
        cout << "base_1_int: " << base_1_int << endl;
        cout << "base_2_int: " << base_2_int << endl;
    }
};

int main()
{
    Derived d1;
    d1.set_base_1_int(10);
    d1.set_base_2_int(20);
    d1.show();
    return 0;
}