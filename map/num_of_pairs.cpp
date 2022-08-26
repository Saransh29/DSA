#include <bits/stdc++.h>
using namespace std;


//precise solution
vector<int> numofpairs(vector<int>& nums) {
        
        
        unordered_map<int,int>mp;
        
        for(auto it: nums) mp[it]++;
        int cnt=0;
        int left=0;
        for(auto it:mp)
        {   
            cnt += it.second/2;
            left += it.second%2; 
        }
        return {cnt,left};
        
    }
//working solution
vector<int> numberOfPairs(vector<int> &nums)
{

    unordered_map<int, int> mp;

    for (auto it : nums)
        mp[it]++;

    int cnt = 0;
    int left = 0;

    for (auto it : mp)
    {
        int t = it.second;
        if (t >= 2)
        {
            while (t > 0)
            {
                cnt++;
                t -= 2;
                mp[it.first] -= 2;
            }
            if(t<0){
                mp[it.first]=1;
                cnt--;
            }
        }
    }
    for (auto it : mp)
    {
        if (it.second == 1)
            left++;
    }

    return {cnt, left};
}

int main()
{
    // vector<int> nums = {5,12,53,22,7,59,41,54,71,24,91,74,62,47,20,14,73,11,82,2,15,38,38,20,57,70,86,93,38,75,94,19,36,40,28,6,35,86,38,94,4,90,18,87,24,22};
    vector<int> nums = {1,3,2,1,3,2,2};
    vector<int> res = numofpairs(nums);
    cout << "ans:" << endl;
    cout << res[0] << " " << res[1] << endl;
    return 0;
}