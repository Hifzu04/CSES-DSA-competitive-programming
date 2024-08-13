#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n, x;
    cin >> n >> x;
    long long arr[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (long long i = 0; i < n; i++)
    {
        long long key = x - arr[i];
        long long *it = find(arr, arr + n, key);
        //cout<<*it<<endl;
        if (it != arr+ n &&  i != (it-arr))
        {
            cout <<i+1<<" "<< (it-arr)+1;
            return 0;
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}