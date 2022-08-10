#include <bits/stdc++.h>
using namespace std;

vector<string> findAndReplacePattern(vector<string> &words, string pattern)
{

    int n = pattern.size();
    int w = words.size();

    string temp = "";
    vector<string> res;
    bool flag;

    for (int i = 0; i < w; i++)
    {
        temp = words[i];
        if (temp.size() != n)
            continue;
        flag = true;

        for (int j = 0; j < n; j++)
        {
            if (temp[j] != pattern[j])
            {
                flag = false;
                break;
            }
        }
        if (!flag)
            continue;
        else
            res.push_back(temp);
    }

    return res;
}

int main()
{
    vector<string> words = {"abc", "def", "ghi", "jkl", "abc", "pqr", "stu", "vwx", "yz"};
    string pattern = "abc";
    vector<string> res = findAndReplacePattern(words, pattern);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}
