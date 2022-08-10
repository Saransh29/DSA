#include <iostream>
using namespace std;

int main()
{
    // count asterisk
    string s = "l|*e*et|c**o|*de|";

    int flag = 0, c = 0, mc = 0;

    for (char x : s)
    {
        if (x == '|' and flag == 0)
        {
            flag = 1;
        }
        else if (x == '|' and flag == 1)
            flag = 0;
        else if (x == '*' and flag == 0)
            c++;
    }
    cout << c;
}
