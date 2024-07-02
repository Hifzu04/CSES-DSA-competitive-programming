#include<bits/stdc++.h>
#define ll long long
using namespace std;
//optimised 0.09s (half than  appartment.cpp)

int main()
{
     cin.tie(0); ios:: sync_with_stdio(false);
    ll n, m, k;
    cin >> n >> m >> k;
    ll desiredSize[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> desiredSize[i];
    }
    ll avlAppratment[m];
    for (ll i = 0; i < m; i++)
    {
        cin >> avlAppratment[i];
    }
    sort(desiredSize, desiredSize + n);

    sort(avlAppratment, avlAppratment+m);
    ll i=0 , j=0,count =0;
    while (i<n and j<m){
        if(desiredSize[i]<=avlAppratment[j]+k and desiredSize[i]>= avlAppratment[j] -k){
            count++;
            i++;
            j++;
        }
        else if(desiredSize[i]>avlAppratment[j]+k){
            j++;
        }
        else {
            i++;
        }
    }
    cout<<count;
    return 0;
}