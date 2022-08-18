#include <bits/stdc++.h>
using namespace std;

int print_single_occurence(vector<int> &vec)
{
    // print the integer which occurs once in the array
    int res;
    for (auto it : vec)
        res = res ^ it;
    return res;
}
void swap_1(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}
void swap_2(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}
int print_xor(int n)
{
    // print xor of all values between 1 to n

    if (n % 4 == 0)
        return n;
    if (n % 4 == 1)
        return 1;
    if (n % 4 == 2)
        return n + 1;
    if (n % 4 == 3)
        return 0;

    return 0;

    // int res = 1;
    // for(int i=2;i<=n;i++)
    //     res = res ^ i;
    // return res;
}
int print_xor_range(int l, int r)
{
    int res;

    res = print_xor(r)^print_xor(l-1);

    return res;

}
void check_ith(int n,int i)
{
    //check if ith bit is set or not

    int mask = 1<<i;
    if(mask&n)cout<<<<i<<" th bit is set";
    else cout<<i<<" th bit is not set";

    //Alternate Approach
    int mask_2 = n>>i;
    if(mask_2&n)cout<<<<i<<" th bit is set";
    else cout<<i<<" th bit is not set";
    
    
}
void set_ith(int n ,int i)
{
    //set ith bit
    int mask = 1<<i;
    int res = n|mask;
    cout<<res;

}
void clear_ith(int n,int i)
{
    //clear ith bit
    int mask = ~(1<<i);
    int res = n&mask;
    cout<<res;
    
}
void clear_ith_range(int n,int l,int r)
{
    //clear ith bit
    int mask = ~((1<<r)-(1<<l));
    int res = n&mask;
    cout<<res;
    
}
void clear_last_set_bit(int n)
{
    //clear last set bit
    int mask = n&(n-1);
    cout<<mask;
}
void count_set_bits(int n)
{
    //count set bits
    int count = 0;
    while(n!=0)
    {
        n = n&(n-1); //clear the last set bit
        count++;
    }
    cout<<count;
}
void remove_last_set_bit(int n)
{
    //remove last set bit
    int clear = ~(n)
}
bool is_power_of_2(int n)
{   
    //check if n is power of 2 or not
    if(n<=0)return false;
    if((n&(n-1))==0)return true;
    return false;
    
    //Alternate Approach

    // if(n<=0) return false;
    // while((n&1)==0) n=n>>1;
    // return (n==1);
}

int main()
{

    vector<int> vec = {1, 1, 2, 2, 3, 4, 5, 5, 3};
    int a = 5, b = 7;

    // cout << print_xor_range(1,5);
    // check_ith(21,4);
    cout<<is_power_of_2(8);

    return 0;
}