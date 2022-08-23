#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int greatest_prime_subsequence(string s)
{
    vector<pair<string, int>> vec{{"", 0}};

    // Stores the answer
    int ans = 0;

    for (int i = 0; i < s.length(); i++)
    {
        int n = vec.size();
        for (int j = 0; j < n; j++)
        {

            // Extract the current pair
            pair<string, int> temp = vec[j];

            // Get the binary string from the pair
            string str = temp.first;

            // Stores equivalent decimal values
            int val = temp.second;

            // If the current character is '1'
            if (s[i] == '1')
            {
                // Add the character
                // to the subsequence
                temp.first = str + '1';

                // Update the value by left
                // shifting the current
                // value and adding 1 to it
                temp.second = ((val << 1) + 1);
            }

            // If s[i]=='0'
            else
            {

                // Add the character
                // to the subsequence
                temp.first = str + '0';

                // Update the value by left
                // shifting the current
                // value and adding 0 to it
                temp.second = ((val << 1) + 0);
            }

            // Store the subsequence in the vector
            vec.push_back(temp);

            // Check if the decimal
            // representation of current
            // subsequence is prime or not
            int check = temp.second;

            // If prime
            if (isPrime(check))
            {
                // Update the answer
                // with the largest one
                ans = max(ans, check);
            }
        }
    }

    //if prime obtained then return it
    if (ans != 0)
    {
        // cout << ans << endl;
        return ans;
    }

    return -1;
}

int main()
{
    string s = "1010";
    cout << greatest_prime_subsequence(s);
    return 0;
}