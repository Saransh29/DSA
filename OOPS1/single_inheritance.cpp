#include <bits/stdc++.h>
using namespace std;

class Base
{
    int data1; // private not inheritable
public:
    int data2;
    void setdata(int a, int b)
    {
        data1 = a;
        data2 = b;
    }
    int getdata1()
    {
        return data1;
    }
    int getdata2()
    {
        return data2;
    }
};
class Derived : public Base
{
    int data3;

public:
    Derived() {}
    void process()
    {
        data3 = data2 * getdata1();
    }
    void display()
    {
        cout << "data1: " << getdata1() << endl;
        cout << "data2: " << data2 << endl;
        cout << "data3: " << data3 << endl;
    }
};
int main()
{
    Derived d1;
    d1.setdata(10, 20); // sets data in base class (data1,data2)
    d1.process();
    d1.display();

    return 0;
}