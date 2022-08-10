#include <bits/stdc++.h>
using namespace std;


int main()
{

    vector<int> v = {5, 6, 7, 7, 6, 5, 5, 6};
    sort(v.begin(), v.end()); // 5 5 5 6 6 6 7 7

    auto lower = lower_bound(v.begin(), v.end(), 7);
    // lower_bound returns an iterator to the first element in the range [first, last) which is not less than value

    auto upper = upper_bound(v.begin(), v.end(), 7);
    // upper_bound returns an iterator to the first element in the range [first, last) which is greater than value

    cout << "lower_bound for 7 at position " << (lower - v.begin()) << '\n';
    cout << "upper_bound for 7 at position " << (upper - v.begin() - 1) << '\n';

    return 0;
}
