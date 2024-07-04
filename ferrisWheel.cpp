#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n, x;
    cin >> n >> x;
    vector<ll> vec;
    ll size = n;
    while (size > 0)
    {
        ll p;
        cin >> p;
        vec.push_back(p);
        size--;
    }
    sort(vec.begin(), vec.end());
    ll i = 0;
    ll cnt = 0;
    
    while (i < n)
    {
        if (vec[i] + vec[n] <= x)
        {
            cnt++;
            i++;
            n--; }
        // else if (vec[i] == x)
        // {
        //     cnt++;
        //     i++;
        // }
        else
        {
            cnt++;
            n--;
        }
    }

    cout << cnt;
}
