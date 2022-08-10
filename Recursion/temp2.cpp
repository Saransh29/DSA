#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    
    int n=nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;  
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;i<n;i++)
        {
            for(int k=j+1;i<n;i++)
            {
            if(nums[i]+nums[j]+nums[k]==0)
            {
             ans.push_back({nums[i], nums[j], nums[k]});    
            }
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
    }
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<threeSum(arr,n);
}