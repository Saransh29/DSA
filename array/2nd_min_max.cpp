#include <bits/stdc++.h>
using namespace std;

void mini_2(vector<int> &v)
{
    int mini = INT_MAX;
    int mini_2 = INT_MAX;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < mini)
        {
            mini_2 = mini;
            mini = v[i];
        }
        else if (v[i] < mini_2)
            mini_2 = v[i];
    }
    cout << mini << " " << mini_2 << endl;
}
void max_2(vector<int>&v)
{
    int max = INT_MIN;
    int max_2 = INT_MIN;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>max)
        {
            max_2 = max;
            max = v[i];
        }
        else if(v[i]>max_2)
            max_2 = v[i];
    }
    cout<<max<<" "<<max_2<<endl;
}
int main()
{
    vector<int> v = {1, 2, 5, 0, 3, 4};

    mini_2(v);
    max_2(v);
    return 0;
}