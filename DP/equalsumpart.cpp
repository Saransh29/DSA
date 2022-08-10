class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum , n = nums.size();
            for(int i=0;i<n;i++){
                sum=sum+nums[i];
            }
        if(sum%2==0) return false;
        
        int target = sum / 2;
        
        Boolean[][] t = new Boolean[nums.length][target + 1];
        
        return helper(nums, 0, target, t);
        
        int helper(int arr[],int s , int n)
        {
          
            for(int i=0;i<n+1;i++){
                for(int j=0;j<sum+1;j++){
                    if(i==0)
                        t[i][j]= false;
                    if(j==0)
                        t[i][j]= true;
    
                }
            }
            
            for(int i=0;i<n+1;i++){
                for(int j=0;j<sum+1;j++){
                    if(arr[n-1]<=sum)
                        t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j] ;
                    else
                        t[i][j] = t[i-1][j] ;   
                }
            }
            return t[n][sum];
            
            
        }
    }
};