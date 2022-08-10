#include <iostream>
#include <vector>
using namespace std;
int main()

{
    vector<vector<int>> m(10,vector<int>(20));

    cout<<"ROWS "<<m.size()<<endl;
    cout<<"COLUMNS "<<m[0].size()<<endl;
    cout<<"TOTAL "<<m.size()*m[0].size()<<endl;


}
