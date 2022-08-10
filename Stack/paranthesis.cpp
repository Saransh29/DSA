#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

bool balancedp(string x)
{

   
    int l=x.length();
    if(l%2!=0)
    {
        return false;
    }
    int i=0;
    stack<char> s;
    while(i<l)
    {
        if(x[i]=='{'||'['||'(')
        {
            s.push(x[i]);
        }
        else if(x[i]=='}'||']'||')')
        {
            if(s.empty())
            {
                return false;
            }
            char ch=s.top();
            s.pop();

            if(x[i]==')'&&ch=='(')
                continue;
            else if(x[i]=='}'&&ch=='{')
                continue;
            else if(x[i]==']'&&ch=='[')
                continue;    
            else
                return false;
            
        
        }
    i++;
    }
    return s.empty();
    

}
int main()
{
    string input;
    cin >> input;
    cout << balancedp(input);
}