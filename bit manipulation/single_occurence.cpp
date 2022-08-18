#include<bits/stdc++.h>
using namespace std;

vector<int> single_occurence(vector<int> &vec)
{
    int n = vec.size();
    // print the integer which occurs once in the array
    int res;
    for (auto it : vec)
        res = res ^ it;

    int diff = 0;
    while(res!=0)
    {
        if(res&1)break;
        diff++;
        res = res>>1;
    }
    int c1=0,c2=0;
    for(int i=0;i<n;i++)
    {
        if(vec[i]&(1<<diff))//if the first bit is set or not
        {
            c1 = c1^vec[i];
        }
        else c2 = c2^vec[i];
    }
    return {c1,c2};
}

int main()
{
    vector<int> vec = {1,1,2,2,3,4,4,5,5,6,7,7 };
    auto res = single_occurence(vec);
    cout<<res[0]<<" "<<res[1]<<endl;
}