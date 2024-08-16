#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    multimap<ll, ll> mp;
    ll n, x;
    cin >> n >> x;
    for (ll i = 0; i < n; i++)
    {
        ll p;
        cin >> p;
        mp.emplace(p, i + 1);
    }
    //for (auto it = mp.begin(); it != mp.end();)
    for (auto it : mp)
    {
        long long key = (x - it.first);
        auto ans = mp.find(key);
        if ((ans != mp.end()) && ans->second != it.second)
        {
            cout << it.second << " " << ans->second;
            return 0;
        }
    }

    cout << "IMPOSSIBLE";
    return 0;
}