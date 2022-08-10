#include <bits/stdc++.h>
using namespace std;

// print all subsequences
void printSubsequences(int index, vector<int> vec, vector<int> &ds, int n)
{
    if (index == n)
    {
        for (auto it : ds)
        {
            cout << it << " ";
        }

        cout << endl;
        return;
    }

    // pick
    ds.push_back(vec[index]);
    printSubsequences(index + 1, vec, ds, n);

    // not pick
    ds.pop_back();
    printSubsequences(index + 1, vec, ds, n);
}
//print subsequences with sum
void printSubsequences_withsum(int index, vector<int> vec, vector<int> &ds, int n,int s,int sum)
{
    if (index == n)
    {   if(s==sum)
        {
           for (auto it : ds)
        {
            cout << it << " "<<endl;
        }
        return; 
        }

    }

    // pick
    ds.push_back(vec[index]);
    s=s+vec[index];
    printSubsequences(index + 1, vec, ds, n,s,sum);
    
    
    // not pick
    s-=vec[index];
    ds.pop_back();
    printSubsequences(index + 1, vec, ds, n,s,sum);
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int> ds;
    printSubsequences(0, vec, ds, vec.size());
    return 0;
}