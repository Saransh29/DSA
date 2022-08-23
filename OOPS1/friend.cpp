#include<bits/stdc++.h>
using namespace std;

class Y;

class X{
    int data;
    friend int add(X,Y);
    friend void exchange(X &,Y &);
    public:
    void setdata(int x){
        data = x;
    }
    void print(){cout<<data<<endl;}
};
class Y{
    int data;
    friend int add(X,Y);
    friend void exchange(X &,Y &);
    public:
    void setdata(int x){
        data = x;
    }
    void print(){cout<<data<<endl;}
};
int add(X o1, Y o2){
    return (o1.data + o2.data);
}

//if we don't use & operator (don't pass by reference) 
// then it will make a copy of the object and pass it to the function
// the original x,y will remain as it is
void exchange(X &x, Y &y){
    
    int temp = x.data;
    x.data = y.data;
    y.data = temp;
}
int main()
{
    X x;
    Y y;
    x.setdata(1);
    y.setdata(2);
    cout<<"add: "<<add(x,y);
    cout<<endl;

    cout<<" prev val of x:";
    x.print();
    cout<<endl;
    cout<<" prev val of y:";
    y.print();
    cout<<endl;

    exchange(x,y);

    cout<<"val of x:";
    x.print();
    cout<<endl;
    cout<<"val of y:";
    y.print();
    cout<<endl;


    return 0;
}