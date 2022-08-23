#include <bits/stdc++.h>
using namespace std;

bool power_of_4(int n)
{
    if (n == 0)
        return false;
    while (n % 4 == 0)
    {
        n /= 4;
    }
    return n == 1;
}
bool powerof4(int n)
{
    return num > 0 && (num & (num - 1)) == 0 && (num & 1431655765 ) == n;
    // check if it is greater than 0
    // check if it is a power of 2
    // to check if it is a power of 4, we turn of all the power of 4 bits 0xAAAAAAAA

    // 0xAAAAAAAA represents binary with even positions set as 1.
    // 0x55555555 represents binary with odd positions set as 1

    // we can turn every power of 4 within 32 bit into binary form, we will get :

        // 1
        // 100
        // 10000
        // 1000000
        // 100000000
        // 10000000000
        // 1000000000000
        // 100000000000000
        // 10000000000000000
        // 1000000000000000000
        // 100000000000000000000
        // 10000000000000000000000
        // 1000000000000000000000000
        // 100000000000000000000000000
        // 10000000000000000000000000000
        // 1000000000000000000000000000000
        // We XOR them together,
        // we will get

        // 1010101010101010101010101010101(1431655765)
}

int main()
{
    int n = 4;
    // cout<<power_of_4(n)<<endl;
    cout << powerof4(n) << endl;
}