#include <bits/stdc++.h>
using namespace std;

vector<int> firstandlastoccurence(vector<int> &vec, int elem)
{
    int n = vec.size();
    vector<int> ans;
    for (int i = 0; i < n; i++)
        if (vec[i] == elem)
            ans.push_back(i);

    if (ans.empty())
        return {-1, -1};

    return {ans.front(), ans.back()};
}
int firstpos(vector<int> &vec, int elem)
{
    int n = vec.size();

    int res = -1;
    int l = 0, r = n - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (vec[mid] == elem)
        {
            res = mid;
            r = mid - 1;
        }
        else if (vec[mid] > elem)
        {
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    return res;
}
int lastpos(vector<int> &vec, int elem)
{
    int n = vec.size();

    int res = -1;
    int l = 0, r = n - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (vec[mid] == elem)
        {
            res = mid;
            l = mid + 1;
        }
        else if (vec[mid] > elem)
        {
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    return res;
}
vector<int> searchRange(vector<int> &vec, int elem)
{

    vector<int> res(2, -1);

    if (vec.empty())
        return res;

    res[0] = firstpos(vec, elem);
    res[1] = lastpos(vec, elem);

    return res;
}

int main()
{
    vector<int> vec = {2, 3, 3, 3, 3, 12};
    int elem = 3;
    vector<int> res = searchRange(vec, elem);
    cout << res[0] << " " << res[1] << endl;
    return 0;
}