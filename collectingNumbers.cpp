#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll round = 1;
    
    ll idx[n+1];

    for(ll i =0 ; i< n ; i++){
       idx[arr[i]] = i;
    }

    for(ll i = 1 ; i<n ; i++) {
        if(idx[i+1] < idx[i]) round++;
    } 

    cout<<round;

    return 0;
}