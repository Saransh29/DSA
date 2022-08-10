#include <iostream>
using namespace std;

bool checkab(char a[],int si)
{ 
    if(a[si]=='\0')
        return true;

    if(a[si]!='a')
        return false;
    if(a[si+1]!='\0'&&a[si+2]!='\0')
        {
            if(a[si+1]=='b'&&a[si+2]=='b')
            {
                return checkab(a,si+3);
            }
        }
    return checkab(a,si+2);
}



int main() {
	char a[100];
    cin>>a;
	int ans=checkab(a,0);
    cout<<"ans "<<ans;
}
