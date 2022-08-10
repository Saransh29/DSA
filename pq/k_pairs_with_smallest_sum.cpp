#include <bits/stdc++.h>
using namespace std;

typedef pair<int, vector<int>> pp;

vector<vector<int>> kSmallestPairs(vector<int> &nums1, vector<int> &nums2, int k)
{
    priority_queue<pp, vector<pp>, greater<pp>> pq;

    for (int i = 0; i < nums1.size(); i++)
    {
        for (int j = 0; j < nums2.size(); j++)
        {
            pq.push({nums1[i] + nums2[j], {i, j}});
        }
    }
    vector<vector<int>> res;
    if (k > pq.size())
    {
        while (!pq.empty())
        {
            res.push_back({nums1[(pq.top().second)[0]], nums2[(pq.top().second)[1]]});
            pq.pop();
        }
    }
    else
    {
        while (k--)
        {
            res.push_back({nums1[(pq.top().second)[0]], nums2[(pq.top().second)[1]]});
            pq.pop();
        }
    }

    return res;
}
//approach 2 , no TLE
vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) 
    {   
        priority_queue<pp>pq;
        // priority_queue<pp,vector<pp>,greater<pp>>pq;
        
        for(int i =0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(pq.size()<k)pq.push({nums1[i]+nums2[j],{ i,j}});
                
                else if (nums1[i]+nums2[j]<pq.top().first) 
                {
                    pq.pop();
                    pq.push({ nums1[i]+nums2[j],{ i,j}});
                } 
                else 
                {
                    break; 
                }
            }
        }
        vector<vector<int>>res;
        
        while(!pq.empty())
        {
            res.push_back({nums1[(pq.top().second)[0]],nums2[(pq.top().second)[1]]});
            pq.pop();
        }
 
        return res;
        
        
    }
int main()
{
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3};
    int k = 3;
    vector<vector<int>> res = kSmallestPairs(nums1, nums2, k);
    for (auto it : res)
    {
        cout << it[0] << " " << it[1] << endl;
    }
    return 0;
}