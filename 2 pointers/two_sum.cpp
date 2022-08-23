#include<bits/stdc++.h>
using namespace std;

// 2 pointers approach ( only works for sorted array )
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int l = 0;
        int h = nums.size()-1;
        vector<int>res(2);
        
        while(l<h)
        {

            if(nums[l]+nums[h]==target)
            {
                res[0]=l;
                res[1]=h;
            }
            if(nums[l]+nums[h]>target)h--;
            else l++;
        }
        return res;
    }
    
        
int main()
{
    vector<int>nums{2,3,4,7,15};
    int target = 9;
    vector<int>res = twoSum(nums,target);
    cout<<res[0]<<" "<<res[1]<<endl;
    return 0;
}