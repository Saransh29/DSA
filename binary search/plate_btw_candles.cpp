#include <bits/stdc++.h>
using namespace std;
vector<int> platesBetweenCandles(string s, vector<vector<int>> &queries)
{
    vector<int> candlesIndex;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '|')
            candlesIndex.push_back(i);
    }

    vector<int> ans;
    for (auto q : queries)
    {
        int firstCandleIndex = lower_bound(candlesIndex.begin(), candlesIndex.end(), q[0]) - candlesIndex.begin();
        int lastCandleIndex = upper_bound(candlesIndex.begin(), candlesIndex.end(), q[1]) - candlesIndex.begin() - 1;

        if (lastCandleIndex <= firstCandleIndex)
        {
            ans.push_back(0);
            continue;
        }

        int tempAns = candlesIndex[lastCandleIndex] - candlesIndex[firstCandleIndex] - (lastCandleIndex - firstCandleIndex);

        ans.push_back(tempAns);
    }
    return ans;
}
vector<int> platesBetweenCandles(string s, vector<vector<int>> &queries)
{

    vector<int> ans;

    for (int i = 0; i < queries.size(); i++)
    {
        int t1 = queries[i][0];
        int t2 = queries[i][1];

        int res = 0;
        bool flag1 = false;
        bool flag2 = false;

        int counter = 0;
        int cnt = 0;

        cout << "t1 " << t1 << " t2 " << t2 << endl;
        for (int j = t1; j <= t2; j++)
        {

            if (s[j] == '|' && !flag1 && !flag2)
            {
                flag1 = true;

                continue;
            }
            if (s[j] == '*' && flag1 && !flag2)
            {

                cnt++;

                continue;
            }
            if (s[j] == '|' && flag1 && !flag2)
            {
                flag2 = true;

                res += cnt;
            }
            if (s[j] == '|' && flag1 && flag2)
            {
                flag2 = false;
                cout << "jth " << j << endl;
            }
        }

        ans.push_back(res);
    }
    return ans;
}

int main()
{
    string s = "**|**|***|";
    vector<vector<int>> queries = {{2, 5}, {5, 9}};
    vector<int> ans = platesBetweenCandles(s, queries);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}
