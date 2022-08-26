#include <bits/stdc++.h>
using namespace std;

/*
Syntax for initialization list in constructor:

    constructor(arguements-list):initialization section   (used to assign initial values)
    {
        //body of constructor
    }

    class Test{
        int a,b;
        public:
            Test(int i , int j) : a(i) , b(j)  //initialization section
            {
                //body of constructor
            }
    };


*/
class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(a+j) //a is initialized before b so a+j is valid
    Test(int i, int j) : b(j), a(i + b) // a is initialized before b , so this is invalid
    {                                   
        cout << "constructor called" << endl;
        cout << "value of a is: " << a << endl;
        cout << "value of b is: " << b << endl;
    }
};
int main()
{
    Test t1(5,7);
    return 0;
}