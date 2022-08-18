#include <bits/stdc++.h>
using namespace std;

int findComplement(int num)
{

    string str;
    //can just switch the bits here instead of doing them after
    while (num)
    {
        if ((num & 1) == 1)
            str += '1';
        else
            str += '0';
        num = num >> 1;
    }
    reverse(str.begin(), str.end());
    cout << "Binary: " << str << endl;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '1')
            str[i] = '0';
        else
            str[i] = '1';
    }
    cout << "Complemented Binary: " << str << endl;

    int t = stoi(str, 0, 2); // converts binary string to decimal

    // 2 for binary, 8 for octal, 10 for decimal and 16 for hexadecimal
    return t;
}
int findComplement_alternate(int num)
{

    int b_num = 0;
    int cnt = 0;//stores exponent value

    while (num != 0) {
        int remainder = num % 2;
        long long c = pow(10, cnt); 
        b_num += remainder * c;
        num /= 2;
        // Count used to store exponent value
        cnt++;
    }
    cout<<"Binary: "<<b_num<<endl;


    int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    int temp = b_num;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp / 10;

        dec_value += last_digit * base;

        base = base * 2;
    }
    cout<<"Decimal: "<<dec_value<<endl;
    return dec_value;

}
int main()
{
    int num = 10;
    cout << findComplement_alternate(num);
}