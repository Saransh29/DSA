#include<iostream>

using namespace std;
 
int length(char n[]){
    int count=0;
    for(int i=0;n[i]!='/0';i++){
        count++;
    }
 return count;

     
}    
  
int main()
{
    char n[100];
    cin>>n;
    cout<<n;
    return 0;
    
}
