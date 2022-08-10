#include<iostream>
using namespace std;
  
    

double myPow(double x, int n)
  {
    long N = abs(n);
    double ans = 1.0;
    while (N > 0)
    {
      if (N % 2 == 1)
      {
        ans = ans * x;
        N--;
      }
      else
      {
        x = x * x;
        N = N / 2;
      }
    }

    if (n < 0)
      return 1.0 / ans;
    else
      return ans;
  }
  int main()
{
    int n,x;
    cin>>x>>n;
   cout<<myPow(x,n);
    
}