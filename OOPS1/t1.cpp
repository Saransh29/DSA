#include <bits/stdc++.h>
using namespace std;

class complexi
{
    int a;
    int b;
public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void sum(complexi o1, complexi o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void display()
    {
        cout << a << "+" << b << "i" << endl;
    }
};

int main()
{
    complexi c1,c2,c3;

    c1.setdata(1, 2);
    c2.setdata(3, 4);
    c3.sum(c1, c2);
    c3.display();
    return 0;
}