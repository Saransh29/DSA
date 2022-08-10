#include<iostream>
#include<vector>
using namespace std;

int main(){
    string num="1210";
    int m = num.length();
    vector<int>count(10);
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++){
                if(i==(num[j]-48))
                    count[i]++;
            }
        }
        
    for(int i=0;i<m;i++)
        {
            int digit = num[i]-48;
            int cnt = count[i];
            if(cnt != digit)
                cout<<"0";
            
        }
        cout<< "1";
}