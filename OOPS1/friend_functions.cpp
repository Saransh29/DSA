#include <bits/stdc++.h>
using namespace std;

/*
    Properties of friend functions:
    1. They can access private members of the class.
    2. Not int the scope of the class .. c1.sumcompelx() = is invalid
    3. Can be declared in public or private scope.

*/

// forward declaration
class complexi;
class calculator
{
public:
    int add(int a, int b)
        {return (a + b);}
    int realsum(complexi, complexi);
    int imgsum(complexi, complexi);
};
class complexi
{
    int a;
    int b;
    //Individually declaring functions as friend 
    // friend int calculator::realsum(complexi, complexi);
    // friend int calculator::imgsum(complexi, complexi);

    //Declaring the entire class as friend
    friend class calculator;

public:
    friend complexi sumcomplex(complexi o1, complexi o2);
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << "+" << b << "i" << endl;
    }
};

int calculator ::realsum(complexi o1, complexi o2)
{
    return (o1.a + o2.a);
}
int calculator ::imgsum(complexi o1, complexi o2)
{
    return (o1.b + o2.b);
}

complexi sumcomplex(complexi o1, complexi o2)
{
    complexi o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complexi c1, c2, sum;

    c1.setdata(1, 2);
    c2.setdata(3, 4);

    // sum = sumcomplex(c1, c2);
    // sum.display();
    calculator calc;

    int realp = calc.realsum(c1, c2);
    int imagi = calc.imgsum(c1, c2);
    cout << "sum of real parts: "<<realp<< endl;
    cout << "sum of imaginary parts: "<<imagi<< endl;
}