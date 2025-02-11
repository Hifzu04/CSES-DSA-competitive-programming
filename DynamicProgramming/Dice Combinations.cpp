
//MEMOSATION  

#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
const ll MOD = 1000000007;
using namespace std;

int f(ll n , vector<ll>&dp){
     if(n==0) return 1;
     if(n<0) return 0;


   if(dp[n]!=-1) return dp[n];

    // int ans = f(n-1)+f(n-2)+f(n-3)+f(n-4)+f(n-5)+f(n-6);

     ll ans=0;
     for(int i =1  ; i<=6 ; i++){
        //ans += f(n-i , dp);
        //or
        ans = (ans + f(n - i, dp)) % MOD;  
     }
     dp[n] =ans;
     return dp[n];
  // return dp[n];
}

void solve() {
    ll n ; cin>>n;
    vector<ll>dp(n+1 , -1);
    
    cout<<f(n , dp);

}
int main()
{
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1 ; 
    while(t--){    
    solve();

}
    return 0;
}