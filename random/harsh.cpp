#include <iostream>
#include <string>
#include <vector>
using namespace std;
int rita(string ip, string op[])
{
    if (ip.length() == 1)
    {
        op[0] = ip[0];
        return 1;
    }
    int count = 0;
    for (int i = 0; i < ip.length(); i++)
    {
        vector <string> p;
        int size1 = rita(ip.substr(0, i) + ip.substr(i + 1, ip.length() - i - 1), p);
        for (int j = 0; j < size1; j++)
        {
            op[count] = ip[i] + p[j];
            count++;
        }
    }
    return count;
}
int main()
{
    string ip;
    cout << "enter string" << endl;
    cin >> ip;
    string op[1000];
    int size = rita(ip, op);
    cout << size << endl;
    for (int i = 0; i < size; i++)
    {
        cout << op[i] << endl;
    }
}