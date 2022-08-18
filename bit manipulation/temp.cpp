#include <bits/stdc++.h>
using namespace std;
void isPalindromeNum(int n)
{
    int t = n;
    vector<int> res;
    while (t != 0)
    {
        res.push_back(t % 10);
        t = t / 10;
    }

    int l = 0, r = res.size() - 1;

    while (l < r)
    {
        cnt++;
        if (res[l] != res[r])
            cout << "NO" << endl;

        l++;
        r--;
    }

    cout << "YES" << endl;
}
void isPalindromeNum(int n)
{
    int t = n;
    int rev = 0;
    while (t != 0)
    {
        rev = rev * 10 + t % 10;
        t = t / 10;
    }

    if (n == rev)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
void reverseInteger(int n)
{
    bool neg = false;
    if (x < 0)
        neg = true;

    int t = abs(x);

    vector<int> res;
    while (t != 0)
    {
        res.push_back(t % 10);
        t /= 10;
    }
    int temp = 1;
    int sz = res.size() - 1;

    int ans = 0;
    int curr;
    while (sz > -1)
    {
        curr = res[sz];
        ans += curr * temp;
        temp = temp * 10;
        sz--;
    }
    if (neg)
        return -ans;
    return ans;
}
void reverseInteger(int n)
{
    int t = n;
    int rev = 0;
    while (t != 0)
    {
        rev = rev * 10 + t % 10;
        t = t / 10;
    }

    cout << rev << endl;
}
int main()
{
    int n;
    cin >> n;
    isPalindromeNum(n);
    return 0;
}
int main()
{
    int n = 1221;

    // return true;
}