#include <bits/stdc++.h>
using namespace std;


class point{
    int x,y;
    friend int distance(point,point);
    public:
        point(int x,int y){
            this->x = x;
            this->y = y;
        }

};
int distance(point p1,point p2){
    return sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
}
class complexi
{
    int a, b;

public:
    complexi(int a, int b)  //parametiarized constructor
    {
        this->a = a;
        this->b = b;
    }
    void print()
    {
        cout << a << " + " << b << "i";
    }
};
class constructor
{
    int a, b;

public:
    constructor()  //default constructor
    {
        this->a = 0;
        this->b = 0;
    }
    constructor(int a, int b)  //parameterized constructor
    {
        this->a = a;
        this->b = b;
    }
    constructor(int a)  //parameterized constructor
    {
        this->a = a;
        b=0;
    }
    void print()
    {
        cout << a << " + " << b << "i";
    }
};

int main()
{
    complexi t(3, 5);
    constructor t1(3, 5);
    t1.print();
    cout<<endl;
    constructor t2(3);
    t2.print();
    cout<<endl;
    constructor t3;
    t3.print();
    // t.print();

    cout<<"\n";
    point p1(3,4);
    point p2(0,0);
    cout<<"distance between points is "<<distance(p1,p2)<<endl;
    return 0;
}