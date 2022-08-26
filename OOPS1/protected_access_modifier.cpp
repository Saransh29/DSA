#include <bits/stdc++.h>
using namespace std;

class Base
{
protected:
    int a; // private rahe but inherit hojaye
private:
    int b; // private and not inheritable
public:
    int c;
};
/*
For a protected member:
                    Public Derivation   Private Derivation    Protected Derivation
Private Members       Not Inherited        Not Inherited         Not Inherited
Protected Members       Protected           Private              Protected
Public Members          Public              Private              Protected

*/
class Derived : public Base
{
};
int main()
{
    Base b;
    Derived d1;
    d1.a = 10; // will not work a is protected in both base and derived class
    d1.b = 20; // will not work b is private in base class

    return 0;
    
}