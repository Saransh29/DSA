#include <iostream>
using namespace std;

int staircase(int n)
{
    if(n<3)
        return n;
    if(n==3)
        return 4;
    return staircase(n-1)+staircase(n-2)+staircase(n-3);
}

int main() {
	int n;
    cin>>n;
    cout<<"ways "<<staircase(n);
	}

