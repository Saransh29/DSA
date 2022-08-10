#include <iostream>
using namespace std;
void rotate(int arr[], int n, int k)
{   
    int z=k+1;
    int p[z];
    for (int i = 0; i <= k; i++)
    {
        p[i] = arr[i]; //first k+1 elements in p
    }
    for (int i = 0; i < n - k ; i++)
    {
        arr[i] = arr[k + 1 + i];  //shifting arr
    }
    for (int i = 0; i <= k; i++)
    {
        //arr[i] = p[i-n+k]; //
        arr[(n - k - 1) + i] = p[i];
    }
    
}
int main()
{
    int n;
    cout << "enter size of array " << endl;
    cin >> n;
    int arr[n];
    cout << "enter elements of array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "enter no. of rotations " << endl;
    cin >> k;
    
    rotate(arr, n, k);

    cout << "your new array is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}