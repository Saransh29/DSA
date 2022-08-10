#include <bits/stdc++.h>
using namespace std;

// n balls positioned in a row, numbered from 0 to n-1.
// arrange all 0 balls into a consistent segment
// what is the minimum no. of swaps required to make all 0 balls in the same segment?
int solution(string &s)
{
    int mod = 1e9;
    int n = s.size();
    int count = 0;
    int i = 0;
    while (i < n)
    {
        if (s[i] == 'R')
        {
            int j = i + 1;
            while (j < n && s[j] == 'R')
            {
                j++;
            }
            if (j < n && s[j] == 'W')
            {
                swap(s[i], s[j]);
                count++;
            }
            i = j;
        }
        else
        {
            i++;
        }
    }
    return (count>=mod)?-1:count;
}
int main()
{
    string s;
    cin >> s;
    cout << solution(s);
    return 0;
}