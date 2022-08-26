#include <bits/stdc++.h>
using namespace std;

string kthLargestNumber(vector<string> &nums, int k)
{

    priority_queue<int> pq;

    for (auto it : nums)
    {
        pq.push(stol(it));
        // cout << it << endl;
    }

    while (k > 1)
    {
        pq.pop();
        k--;
    }
    string res = to_string(pq.top());
    return res;
}

// approach 1 using comparator
struct comparator1
{
    bool operator()(string &s1, string &s2)
    {
        // length greater , so swap
        if (s1.length() > s2.length())
        {
            return true;
        }

        // lesser lenghth , no swap
        else if (s1.length() < s2.length())
        {
            return false;
        }

        // if lengths are equal iterate
        else
        {
            for (int i = 0; i < s1.length(); i++)
            {

                if (s1[i] - '0' > s2[i] - '0')
                {
                    return true;
                }
                else if (s1[i] - '0' < s2[i] - '0')
                {
                    return false;
                }
            }
            return false;
        }
    }
};
string kthLargestNumber_pq_cmp(vector<string> &nums, int k)
{

    priority_queue<string, vector<string>, comparator> q;

    for (auto it : nums)
    {
        q.push(it);

        if (q.size() > k)
        {
            q.pop();
        }
    }

    return q.top();
}

// Approach 2 sorting using comparaor
static bool cmp(string &a, string &b)
{
    if (a.size() == b.size())
    {
        return a > b;
    }
    return a.size() > b.size();
}
string kthLargestNumber_sort(vector<string> &nums, int k)
{
    sort(nums.begin(), nums.end(), cmp);
    int n = nums.size();
    return nums[k - 1];
}
// Approach 3 PQ using diff comparator
struct comparator
{   //this operator is for sorting in decreasing order / max heap comparator

    bool operator()(string &a, string &b)
    {
        if (a.size() == b.size())
        {
            return a > b;
        }
        return a.size() > b.size();
    }
};
struct cmp2{
    bool operator()(string &a, string &b){
        return (a.size() == b.size()) ? a < b : a.size() < b.size();
    }
};
string kthLargestNumber_pq(vector<string> &nums, int k)
{

    priority_queue<string, vector<string>, cmp2> q;

    for (auto it : nums)
    {
        q.push(it);

        if (q.size() > k)
        {
            q.pop();
        }
    }

    return q.top();
}

int main()
{
    vector<string> nums = {"623986800", "3", "887298", "695", "794", "6888794705", "269409", "59930972", "723091307", "726368", "8028385786", "378585"};
    int k = 11;
    cout << kthLargestNumber(nums, k);
    return 0;
}