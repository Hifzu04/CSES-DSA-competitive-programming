#include <iostream>
#include <map>
#define ll long long
using namespace std;

int main()
{
    ll numberCustomer;
    cin >> numberCustomer;
    ll arr;
    ll dept;
    map<ll, ll> mpp;
    while (numberCustomer--)
    {
        cin >> arr >> dept;
        mpp[arr]++;  //mpp[arr] = 1;
        mpp[dept]--;  //mpp[dept] = -1;

    }

     ll maxo = 0;
     ll sum=0;
    for (auto it : mpp)
    {
        cout<<it.first<<" "<<it.second<<endl;
        sum += it.second;
        maxo = max(maxo,sum);
    }
    cout<<maxo;
}