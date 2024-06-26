#include<iostream>
#include<algorithm>
#define ll long long

using namespace std;

int main (){
    ll n;
    ll arr[n];
    cin>>n;
    for(ll i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr.begin() , arr.end());

    int count =0;

    for(ll i=0 ; i<n-1 ; i++){
        if(arr[i]!=arr[i+1]){
            count++;
        }
    }
    cout<<count;
    return 0;

}