#include<bits/stdc++.h>
using namespace std;

class bank
{
    int principle;
    float rate;
    int year;
    int return_amount;
    public:
        bank(){}
        bank(int p,int r,int y)
        {
            principle = p;
            rate = r;
            float r1 = rate/100;
            year = y;
            return_amount = principle;
            for(int i=0;i<year;i++)
            {
                return_amount *= (1+r1);
            }
        }
        void display()
        {
            cout<<"principle: "<<principle<<endl;
            cout<<"return_amount: "<<return_amount<<endl;
        }
};
 
int main()
{   
    int p,y;
    int r;
    cin>>p>>r>>y;
    bank b1(p,r,y);

    b1.display();

    return 0;
}   