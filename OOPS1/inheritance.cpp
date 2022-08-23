#include <bits/stdc++.h>
using namespace std;

class emp
{
    float salary;

public:
    int id;
    emp() {}
    emp(int i)
    {
        id = i;
        salary = 100.0;
    }
    emp(int i, float s)
    {
        id = i;
        salary = s;
    }
    void display()
    {
        cout << "id: " << id << endl;
        cout << "salary: " << salary << endl;
    }
};
// Derived class syntax
// class derived_class_name :  base_class_name
// class derived_class_name : visibility_mode base_class_name

// visibility_mode: you can inherit publically,privately
// by default it is private
// private visibility_mode:
//      -public members of the base class becomes private members of the derived class
// public visibility_mode:
//      -public members of the base class becomes public members of the derived class
// private members are never inherited

class programmer : public emp
{
    string lang;

public:
    programmer() {}
    programmer(int i)
    {
        id = i;
        lang = "c++";
    }
    string getter()
    {
        return lang;
    }
    void display1()
    {
        cout << "id: " << id << endl;
        string res = getter();
        cout << "lang: " << res << endl;
    }
};

int main()
{
    // emp e1(1);
    // emp e2(2, 200.0);
    // e1.display();
    // e2.display();

    programmer p1(1);
    // string res=p1.getter();
    // cout<<res<<endl;
    
    cout<<"display constructor from derived class"<<endl;
    p1.display1();

    cout<<endl;

    cout<<"display constructor from base class"<<endl;
    p1.display();
    return 0;
}