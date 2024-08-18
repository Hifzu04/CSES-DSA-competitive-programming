#include <bits/stdc++.h>
#define ll long long
using namespace std;

//std::next(mySet.begin(), n) moves the iterator forward by n positions and returns the new iterator.

//optimised: take vector , nth_element(vec.begin(), vec.begin() +n, vec.end());=> middle element at posn of m/2(correct)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    multiset<ll>s;
    for(ll i=0 ; i<n ; i++){
        ll x;
        cin>>x;
        s.emplace(x);
    }
   auto mid = next(s.begin() , s.size()/2);
   ll diff = 0; 
   for(auto it : s){
   // cout<<it<< " ";
    diff += abs(it - *mid);
   }
   cout<<diff;
    return 0;
}