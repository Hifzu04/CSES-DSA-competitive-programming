#include<iostream>
#define ll long long
using namespace std;
int main(){
    ll ans = 0;
    ll divider = 5;
    ll n;
    cin>>n;
    while(n>=divider){
        ans += (n/divider);
        divider*=5;
    }
    cout<<ans;

return 0;
}