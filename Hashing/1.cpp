#include<bits/stdc++.h>
using namespace std;
int main()

{
    unordered_set<int>s;
    s.insert(5);
    s.insert(10);
    //find element in unordered_set
    if(s.find(5)==s.end()) cout<<"not found"<<endl;
   
    else cout<<"found"<<endl;
    //alternate method to find element in unordered_set
    if(s.count(5)==0) cout<<"not found"<<endl;
    else cout<<"found"<<endl;

    //print set
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    //clear set
    s.clear();

    //erase
    s.erase(5);
    s.erase(s.begin(),s.end());

    return 0;
   

}