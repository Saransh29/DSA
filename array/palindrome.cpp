#include<iostream>

using namespace std;

int length(char n[]){
    int count=0;
    for(int i=0;n[i]!='\0';i++){
        count++;
    }
 return count; 
}
bool palindrome(char n[]){
    
    for(int i=0;i<=length(n)/2;i++)
    {
        if(n[i]!=n[length(n)-i-1])
        {
            return false;
        }    
    }
    return true;

     
}    
  
int main()
{
    char n[100];
    cin>>n;
    cout<<palindrome(n);
    return 0;
    
}
