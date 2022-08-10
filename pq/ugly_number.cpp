#include <bits/stdc++.h>
using namespace std;

bool isUgly(int n)
{
    if (n == 0)
        return false;

    while (n % 2 == 0)
        n /= 2;
    while (n % 3 == 0)
        n /= 3;
    while (n % 5 == 0)
        n /= 5;

    return n == 1;
}

bool check(int t)
{
    if (t == 1)
        return true;
    if (t % 2 == 0 || t % 3 == 0 || t % 5 == 0)
        return true;
    return false;
}
int nthUglyNumber(int n)
{

    priority_queue<int> pq;

    int t = 1;
    while (pq.size() != n)
    {
        if (check(t))
        {
            pq.push(t);
        }

        t++;
    }
    return pq.top();
}

typedef long long int lll;
int nthUglyNumber_working(int n)
{
    priority_queue<lll, vector<lll>, greater<lll>> minh;

    minh.push(1);
    if (n == 1)
        return 1;
    while (n != 1)
    {
        lll temp = minh.top();
        minh.pop();
        if (temp % 2 == 0)
        {
            minh.push(temp * 2);
        }
        else if (temp % 3 == 0)
        {
            minh.push(temp * 2);
            minh.push(temp * 3);
        }
        else
        {
            minh.push(temp * 2);
            minh.push(temp * 3);
            minh.push(temp * 5);
        }
        n--;
    }
    return minh.top();
}

int main()
{
    int n = 11;
    cout << nthUglyNumber(n);
    // check function to theek h

    // for (int i = 1; i < 15; i++)
    // {
    //     if (check(i))
    //         cout << i << " ";
    // }
    return 0;
}