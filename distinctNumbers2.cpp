#include <iostream>
#include <algorithm>
#include<vector>
#define ll long long

using namespace std;


int main()
{
    ll n;
    ll count = 0;
    cin >> n;
    ll arr[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll temparr[10000] = {0};

    for(ll i=0; i<n; i++){
        temparr[arr[i]] = arr[i];
        
    }
    for(auto it : temparr){
        if(temparr[it] != 0){
            count++;
        }
    }
    cout<<count;
    return 0;
}