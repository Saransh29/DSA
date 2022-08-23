#include <bits/stdc++.h>
using namespace std;


void printprime(int n)
{
    vector<bool>prime(n+1,true);

    for (int p = 2; p * p <= n; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}




















//gives TLE

// bool isprime(int n)
// {
//     if (n == 0 || n == 1)
//         return false;
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }
// int countPrimes(int n)
// {
//     int cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (isprime(i))
//             {
//                 cnt++;
//                 cout<<i<<" ";
//             }
//     }
//     return cnt;
// }

int main()
{
    int n = 10;
    // cout<<"Number of primes: "<<countPrimes(n)<<endl;
    printprime(n);
}