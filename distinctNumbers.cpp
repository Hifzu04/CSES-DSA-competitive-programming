#include <iostream>
#include <algorithm>
#define ll long long

using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll arr[n];

    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    ll count = 1;

    for (ll i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
            count++;
    }

    cout << count;
    return 0;
}