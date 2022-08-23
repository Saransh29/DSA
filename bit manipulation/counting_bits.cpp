#include<bits/stdc++.h>
using namespace std;
    int set_bits(int n)
    {
        int res=0;
        while(n)
        {
            if(n&1==1)res++;
            n = n/10;
        }
        return res;
    }
    //you can avoid converting to binary
    int dec_to_binary(int num)
    {
        if(num==0)return 0;
        
        int b_num=0;
        int cnt=0;//stores exponent value
        while(num)
        {
            int remainder = num%2;
            long long c = pow(10, cnt);
            b_num += remainder * c;
            num /= 2;
            cnt++;
    }
    return b_num;
    }
    vector<int> countBits(int n) {
        
        vector<int>res(n+1);
        res[0] = 0;
        
        for(int i = 1; i <= n; i++)
        {
            // O(N) approach
            if((i & 1) == 0)        //if even then set bits are same as i>>1
                res[i] = res[i >> 1];
            else                    //if odd set bits are res(n-1) + 1
                res[i] = res[i - 1] + 1;
           
        }
        // return accumulate(res.begin(),res.end(),0); if sum is required


        // Alternate Approaches O(N*K)

//         for(int i=0;i<=n;i++)
//         {
//             if(i==0)res.push_back(0);
//             else
//             {
//                 int cnt=0;
//                 int temp=i;
//                 while(temp)
//                 {
//                     //Approach 1:

//                     // if(temp&1==1)cnt++;
//                     // temp = temp>>1;

//                     //Approach 2:  O(N*K) where k = no.of set bits

//                     temp = temp&(temp-1);  // n&(n-1) will clear the last set bit
//                     cnt++;         
//                     //no. of times last set bits are cleared gives the no. of set bits 
//                 }
//                 res.push_back(cnt);

//             }
//         }
        return res;
        
    }

int main()
{
    int n = 6;

    vector<int>res = countBits(n);
    for(int i=0;i<res.size();i++)
    {
        // cout<<res[i]<<" ";
    }

    return 0;
}