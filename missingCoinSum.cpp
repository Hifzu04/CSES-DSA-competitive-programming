#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll minCoinsum(vector<int>vec , int n){
   ll c_sum = 1;
   sort(vec.begin() , vec.end());
    for(ll i = 0 ; i<n ; i++){
        if(c_sum<vec[i]){
            return c_sum;
        }
        c_sum+= vec[i];
    }
    return c_sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0; i<n ; i++){
        cin>>vec[i];
    }
   cout<<minCoinsum(vec, n);
 
    return 0;
}