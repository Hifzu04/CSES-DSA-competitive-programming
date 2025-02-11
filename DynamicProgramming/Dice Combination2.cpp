// Tabulation
#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;
ll mod = 1e9 + 7;


void solve()
{
    ll n;
    cin >> n;

   // vector<ll> dp(n + 1, -1);
   ll dp[n+1] = {};

    dp[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 6 and j <= i; j++)
        {
            dp[i] = (dp[i] + (dp[i - j]))%mod;
        }
    }
    cout << dp[n];
}
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}