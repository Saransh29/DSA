#include <bits/stdc++.h>
using namespace std;

class base
{

    int a;
    int b;
    int *ptr;

public:
    // base(){}
    base()
    {
        ptr = new int;
    }
    void set_data(int x, int y, int z)
    {
        a = x;
        b = y;
        *ptr = z;
    }
    void show_data()
    {
        cout << "a = " << a << " b = " << b << " ptr:" << *ptr << endl;
    }
    base(base &obj)
    {
        a = obj.a;
        b = obj.b;
        // ptr = obj.ptr;
        ptr = new int;
        *ptr = *(obj.ptr);
    }
};
int main()
{
    base b1;
    b1.set_data(10, 20, 6);
    cout << "b1:";
    b1.show_data();
    // base b2(b1); // default copy constructor
    base b2(b1);
    cout << "b2:";
    b2.show_data();

    cout << "b2 new:";
    b2.set_data(30, 40, 7);
    b2.show_data();
    cout << "b1 new:";
    b1.show_data();
    return 0;
} 