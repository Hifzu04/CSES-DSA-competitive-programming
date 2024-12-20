#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    // vector<ll> vec(2000000, 0);
    // ll cnt=0;
    // ll ans = 0;
    // for(ll i = 0 ; i<  n ; i++){
    //     ll k ; cin>>k;
    //     if(vec[k] ==0){
    //         cnt++;
    //         vec[k]=1;
    //         ans= max(ans,cnt);
    //     }else{

    //        fill(vec.begin(), vec.end(), 0);
    //         cnt = 1;
    //     }
    // }
    // cout<<ans;
    //vector<ll> vec(n);
    map<ll, ll> mpp;
    ll start = 0;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        if (mpp.find(k) == mpp.end())
        {
            mpp.insert({k, i});
        }
        else
        {
            if (mpp[k] >= start)
            {
                start = mpp[k] + 1;
            }
            mpp[k] = i;
        }
        ans = max(ans, i-start+1);

    }
    cout<<ans;

    return 0;
}