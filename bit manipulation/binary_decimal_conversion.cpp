#include<bits/stdc++.h>
using namespace std;

int dec_to_bin(int n)
{
    int bin_num = 0;
    int cnt = 0;//stores exponent value
    while (n != 0)
    {
        int remainder = n % 2;
        long long c = pow(10, cnt);
        bin_num += remainder * c;
        n /= 2;
        // Count used to store exponent value
        cnt++;
    }
    return bin_num;
}
int bin_to_dec(int n)
{
    int dec_value = 0;
    // Initializing base value to 1, i.e 2^0
    int base = 1;
    int temp = n;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 2;
    }
    return dec_value;
}
int main()
{
    int n = 5;
    cout<<"Binary: "<<dec_to_bin(n)<<endl;
    int t = 1001;
    cout<<"Decimal: "<<bin_to_dec(t)<<endl;
}