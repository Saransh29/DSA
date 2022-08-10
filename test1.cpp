#include <bits/stdc++.h>
using namespace std;

bool shiv(vector<int> ptr, int n, int lsum, int rsum, int i)
{
    if (i == n)
    {
        return (lsum == rsum);
    }
    if (ptr[i] % 5 == 0)
    {
        return shiv(ptr, n, lsum + ptr[i], rsum, i + 1);
    }
    if (ptr[i] % 3 == 0)
    {
        return shiv(ptr, n, lsum, rsum + ptr[i], i + 1);
    }
    else
    {
        return shiv(ptr, n, lsum + ptr[i], rsum, i + 1) || shiv(ptr, n, lsum, rsum + ptr[i], i + 1);
    }
}
int main()
{
    int n;
    cin >> n;
    // int *ptr = new int[n];
    vector<int> ptr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ptr[i];
    }

    bool r = shiv(ptr, n, 0, 0, 0);
    if (r == 1)
        cout << "true";
    else
        cout << "false";
}