#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
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
        ll diff = (desiredSize[i]-avlAppratment[j]);
        if(abs(diff)>=0 && abs(diff)<=k){
            count++;
            i++;
            j++;
        }
        else if(diff>k){
            j++;
        }
        else {
            i++;
        }
    }
    cout<<count;
    return 0;
}