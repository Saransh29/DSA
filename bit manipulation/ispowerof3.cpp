#include <bits/stdc++.h>
using namespace std;

bool ispowerof3(int n)
{
    if (n == 0)
        return false;
    while (n % 3 == 0)
    {
        n /= 3;
    }
    return (n == 1);
}

int main()
{
    int n = 27;
    cout << ispowerof3(n) << endl;
    return 0;
}