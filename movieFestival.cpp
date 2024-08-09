#include <bits/stdc++.h>
#define ll long long
using namespace std;


int solve(int n,vector<pair<int,int> >&vec ){
       
}

int main()



{
   
    ll n ;
    cin>>n;
    vector<pair<int,int>>vec(n);
    for(int i=0; i<n; i++){
        cin>>vec[i].first >>vec[i].second;
    }
    cout<<solve(n , vec)<<endl;
}