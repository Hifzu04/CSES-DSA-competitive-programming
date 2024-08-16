#include <bits/stdc++.h>
#define ll long long
using namespace std;

// kadane algorithm


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll curr_sum = 0;
    
    ll n;
    cin >> n;
    vector<ll> vec(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    ll maxSum = vec[0];
    for (ll i = 0; i < n; i++)
    {
        curr_sum += vec[i];
        maxSum = max(curr_sum, maxSum);
        if (curr_sum < 0)
            curr_sum = 0;
    }
    cout << maxSum;
}