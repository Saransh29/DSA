#include<iostream>
using namespace std;

int main(){
    //Maximum sum Of Spliced Array
    
    class Solution { 
public: 
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) { 
        int sum1=0,sum2=0; 
        int maxsum=0; 
         
        vector<int>pre1,pre2; 
        int prefix=0; 

        for(auto it:nums1){ 
            prefix+=it; 
            pre1.push_back(prefix); 
            sum1+=it; 
        } 
        int prefix2=0; 
        for(auto it:nums2){ 
            prefix2+=it; 
            pre2.push_back(prefix2); 
            sum2+=it; 
        } 
        maxsum=max(sum1,sum2); 
        for(int l=0;l<nums1.size();l++){ 
            for(int r=l;r<nums1.size();r++){ 
                int s1=pre1[r]; 
                int s2=pre2[r]; 
                if(l-1>=0){ 
                    s1-=pre1[l-1]; 
                    s2-=pre2[l-1]; 
                } 
                if(s1>s2){  
                    int nsum=sum2+s1-s2; 
                    maxsum=max(maxsum,nsum); 
                }else if(s2>s1){ 
                    int nsum=sum1+s2-s1; 
                    maxsum=max(maxsum,nsum); 
                } 
            } 
        } 
        return maxsum; 
    } 
};

}
class Solution {
public:
    vector<vector<int>> dp1, dp2;
    vector<int> nums1,nums2;
    int dfs(int index, int t) {
        
        if(index == nums1.size()) return 0;
        if(dp1[index][t]!=-1) return dp1[index][t];
        int res = 0;
        if(t == 0){
            res = nums1[index] + dfs(index+1,0);
            res = max(res, nums1[index] + dfs(index+1,1));
        }
       else if(t == 1) {
           res = nums2[index] + dfs(index+1,1);
           res = max(res, nums2[index] + dfs(index+1,2));
       }
        else res = nums1[index] + dfs(index+1,2);
      return dp1[index][t] = res;
        
    }
                      
       int dfs2(int index, int t) {
        
        if(index == nums1.size()) return 0;
        if(dp2[index][t]!=-1) return dp2[index][t];
        int res = 0;
        if(t == 0){
            res = nums2[index] + dfs2(index+1,0);
            res = max(res, nums2[index] + dfs2(index+1,1));
        }
       else if(t == 1) {
           res = nums1[index] + dfs2(index+1,1);
           res = max(res, nums1[index] + dfs2(index+1,2));
       }
        else res = nums2[index] + dfs2(index+1,2);
      return dp2[index][t] = res;
        
    }
                      
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        this->nums1 = nums1;
        this->nums2 = nums2;
        dp1 = vector<vector<int>>(n + 20, vector<int>(3,-1));
        dp2 = vector<vector<int>>(n + 20, vector<int>(3,-1));
        
        return max(dfs(0,0), dfs2(0,0));
        
    }
};
class Solution {
public:
    int calculate(vector<int>& nums) {
    int curr = 0;
    int mx = INT_MIN;
    
    for (auto c : nums)
    curr = max(c, curr + c),
    mx = max(mx, curr);

    return mx;
}
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size();
    vector<int> v1(n, 0);

    auto v2 = v1;

    int sum1 = 0;
    int sum1 = 0;
    for(int i = 0 ; i<n ;  i++){
    sum1 += nums1[i];
    sum1 += nums2[i];
    }
    for (int i = 0; i < n; i++)
    {
      v1[i] = nums2[i] - nums1[i];
    }
    for (int i = 0; i < n; i++)
    {
      v2[i] = nums1[i] - nums2[i];
    }
    int first = max(sum1 + calculate(v1), sum2 - calculate(v1));
    int second = max(sum2 + calculate(v2), sum1 - calculate(v2));

    return max(first , second);
    }
};