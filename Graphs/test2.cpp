#include<iostream>
using namespace std;

class Solution {
public:
    string greatestLetter(string s) {
        
        int n =  s.size();
        vector<char>both;
        
        for(int i = 0;i < n;i++) { 
            for(int j = 0;j < s.size();j++) {
                if((s[i]-'16')==(s[j]-'48'))
                    both.push_back(s[i]);   
                                                        //uppercase letter - 65 to 90
                                                        //lowercase letter - 97 to 122
            }
        }
        sort(both.begin(),both.end());
        return both[both.size() - 1];
    }
};

int main(){


}
for(i=0;i<s.size();i++)
        {
        for(int j=1;j<n;j++){

        }
            
        }
        for(i=0;i<26;i++)
        {
            if(c1[i]>0 && c2[i]>0)
            {
                return char(c1[i]);
            }
        }
num = 0, k>= 0, ans = 0
k = 0, last digit of num != 0, ans -1
if num odd, k even, return -1i
if lst dig = k, return 1
warna iterate kr k cnt krna

class Solution {
public:
    int minimumNumbers(int num, int k) {
        int ans = 0;
        if(num==0&&k>=0) 
            return 0;
        if(k==0 && num%10 != 0)
            return -1;
        if(k%2==0 && num%2 != 0)
            return -1;
        if(num%10 == k)
            return 1;
        int cnt;

        num-k;
        
        if(num<k)
            return -1;
        
    }

};
class Solution { 
public: 
    int minimumNumbers(int num, int k) { 
        if(num==0) return 0; 
        for(int i=1;i<=10;i++){ 
            int res=i*k; 
            if(res%10==num%10 and res<=num){ 
                return i; 
            } 
        } 
        return -1; 
    } 
};
class Solution {
public:
    int longestSubsequence(string s, int k) {
           int n=s.length();
          int res=0, sum =0;
        for(int i=0, l=0;i<n;i++){
           sum<<=1;
           sum&=(s[i]=='1');
          while(sum>k){
          sum-=((s[l]=='1')<<(i-l+1));
          l++;
          }
        res=max(res,i-l+1);
        }
       return res;
    }
};
class Solution {
public:
    int longestSubsequence(string s, int k) {
        
        int n=s.size();
        int res=0;
        
        string ans="";
        
        int t=0;
        int m=0;
        
        
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                if(res>k or m>=31)
                {
                    
                }
                else if((res+(1<<m))<=k)
                {
                    res+=(1<<m);
                    ans+="1";
                }
            }
            if()
            
            else
            {
                ans+=s[i];
            }
            
            m++;
        }
        reverse(ans.begin(),ans.end());
        
        return final.size();
        
    }
};