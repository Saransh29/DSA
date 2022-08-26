#include<bits/stdc++.h>
using namespace std;

// string s1 can be constructed with string s2

bool canConstruct(string s1 , string s2)
{
    unordered_map<char,int>m;
    for(auto it : s2) ++m[it];

    for(auto it : s1) 
        if(m[it]--<=0) return false;
        //can also use if(--m[it]<0) return false; isme pehle subtract krke phir condition check krega

    return true;
}


int main()
{
    string s1 = "aa";
    string s2 = "aab";
    cout<<canConstruct(s1,s2)<<endl;



    return 0;

}