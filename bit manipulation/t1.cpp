#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout<<"a: "<<a<<" "<<"b: "<<b<<endl;

    (a & 1) ? cout << a << " is odd" : cout << a << " is even";
    // (a & 1)
    // returns 1 if a is odd
    // returns 0 if a is even
    cout << endl;

    cout << " (a & b) " << (a & b)<<endl<<endl; // returns the bitwise AND of a and b

    cout << " (a | b) " << (a | b)<<endl<<endl; // returns the bitwise OR of a and b

    cout << " (a ^ b) " << (a ^ b)<<endl<<endl; // returns the bitwise XOR of a and b

    cout << " ~a " <<( ~a)<<endl<<endl; // returns the bitwise NOT of a

    cout << a << " << 1 " << (a << 1)<<endl<<endl; // returns a left shifted by 2

    cout << a << " >> 1 " << (a >> 1)<<endl<<endl; // returns a right shifted by 2



    return 0;
}