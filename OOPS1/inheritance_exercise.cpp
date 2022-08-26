#include <bits/stdc++.h>
using namespace std;

/*
Create 2 classes:
    1. Simple Calculator  - takes input of 2 numbers and performs operation +,-,*,/.
        and displays the result using another function
    2. Scientific Calculator - takes input of 2 numbers and performs scientific operation


    Create another class hybrid calculator and inherit these 2 classes.
    1. Type of inheritance - multiple inheritance
    2. 
*/
class simplecalc
{
    // protected:
    // int a,b;
public:
    int a, b;
    void set1(int x, int y)
    {
        a = x;
        b = y;
    }

    void addi()
    {   
        // cin>>a>>b;
        cout << "Addition: " << a + b << endl;
    }
    void subt()
    {
        // cin>>a>>b;
        cout << "Subtraction: " << a - b << endl;
    }
    void mult()
    {
        // cin>>a>>b;
        cout << "Multiplication: " << a * b << endl;
    }
    void divi()
    {
        // cin>>a>>b;
        cout << "Division: " << a / b << endl;
    }
};
class scientificcalc
{
public:
    int a, b;
    void set2(int x, int y)
    {
        a = x;
        b = y;
    }
    void power()
    {
        // cin>>a>>b;
        cout << "Power: " << pow(a, b) << endl;
    }
    void root()
    {
        // cin>>a>>b;
        cout << "Root: " << sqrt(a) << endl;
    }
};

class hybridcalc : public scientificcalc, public simplecalc
{ 
};

int main()
{
    hybridcalc h;
    h.set1(2,3);
    h.set2(2,3);
    h.addi();
    h.subt();
    h.mult();
    h.divi();
    h.power();
    h.root();
    return 0;
    return 0;
}