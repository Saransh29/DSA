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
    int a = 10; // static allocation
    int *p = &a;
    cout << "address of a: " << p << endl;
    cout << "value of a: " << *(p) << endl; // dereference

    int *p1 = new int(20); // dynamic memory allocation
    cout << "address of p1: " << p1 << endl;
    cout << "value of p1: " << *(p1) << endl;

    int *arr = new int[5]; // dynamic memory allocation
    // arr[0] = 1;
    *(arr) = 1;
    *(arr + 1) = 2;
    delete[] arr;                         // free the memory
    cout << "arr[0]: " << arr[0] << endl; // will print garbage value
    cout<< "arr[1]: "<<*(arr+1)<<endl;     // will print garbage value


    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";

    complexi c1;
    // complexi *ptr = &c1;
    complexi *sk = new complexi; // when dynamically allocated sk.setdata() cannot be used
    (*sk).setdata(1, 2);         // (*sk) is same as sk->
    sk->setdata(1, 2);      //same thing
    sk->display();


    complexi *ptr = new complexi[4];
    // (*ptr).setdata(1, 2);
    ptr->setdata(2, 3);

    (ptr + 1)->setdata(3, 4);
    // (*(ptr+1)).setdata(2,3);

    ptr->display();
    (ptr + 1)->display();


    //this keyword
    // is a pointer which points to the object which is being created 
    //                                         / which invokes the memory function
    
    
    
    return 0;
}