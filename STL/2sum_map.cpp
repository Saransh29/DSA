#include<bits/stdc++.h>


using namespace std;

int main()
{
    map<char,int> count;

    string x = "saransh bibiyan";

    for(char c: x)
        count[c]++;
    
    // cout<<count['a']; //gives frequency of a in string
                      // in log N time

    
    map<string,string> dict;

    dict.insert(pair<string,string>("abs","a"));
    dict.insert(pair<string,string>("asd","b"));
    dict.insert(pair<string,string>("aada","c"));

    // for(auto t : dict)
    // {
    //     cout<< t.first << " "<< t.second<<endl;
    // }


        vector<int> nums={2,7,11,15};
        int target = 9;

        vector<int> ans;

        int n = nums.size();
      
        unordered_map<int, int> imap;

        for (int i = 0;i<n; ++i) 
        {
            auto it = imap.find(target - nums[i]);

            if (it != imap.end()) 
            {
                ans.push_back(it->second);
                ans.push_back(i);

            }
                
            imap[nums[i]] = i; // isse map m value dalegi
        }
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<endl;
        }
    



}