#include<iostream>
#include<algorithm>
#include<string>


using namespace std;

bool isPalindrome(string t)
{
    
    string P = t;
 
    reverse(P.begin(), P.end());
 
   
    if (t == P) 
        return true;
    else
        return false;
    
}
bool validPalindrome(string s) 
{
    
        if(isPalindrome(s)==0)
            return false;
        
        int n = s.length()-1;
        
        for(int si=0;si<=n;si++)
        {
            string temp="";
            if (si==0)
            {
                temp= s.substr(1,n);
                if(isPalindrome(temp)==0)
                    continue;
            }
            else if (si==n)
            {
                temp= s.substr(0,n);
                if(isPalindrome(temp)==0)
                    return false;
                else 
                    return true;

            }
            else
            {
                temp = s.substr(0,si) + s.substr(si+1,n-si);
                if(isPalindrome(temp)==0)
                    return false;  
                else 
                    return true;
            }
            
            
        }
        return validPalindrome(s);


}

int main()
{
    string s;
    cin>>s;

    
    cout << validPalindrome(s);
    // cout << isPalindrome(s);



}
