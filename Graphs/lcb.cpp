class Solution {
private:
    int fib(int n)
{
    int f[n + 2];
    int i;

    f[0] = 0;
    f[1] = 1;
 
    for(i = 2; i <= n; i++)
    {

       f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}
    
public:
  
    int countHousePlacements(int n) {
        return pow(fib(n+1), 2);
        
        
        
        
        
    }
};
class Solution {
public:
    int countHousePlacements(int n) {
        if(n==1)
            return 4;
        
        int cnt1=1,cnt2=1,prev_cnt1,prev_cnt2;
        
        for(int i = 2; i<=n;i++)
        {
            prev_cnt1 = cnt1;
            prev_cnt2 = cnt2;
            
            cnt1 = prev_cnt1 + prev_cnt2;
            cnt2 = prev_cnt2;
        }
        
        int res = cnt1+cnt2;
        int mod=1000000007;
        
        return (res*res)%mod;
        
        
    }
};
class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
               
                if(i==j || i+j == m-1)
                {
                    if(grid[i][j] == 0 )return false;
                }
                else
                {
                    if(grid[i][j])return false;
                }    
            }
        }
        return true;
    }
};