#include<iostream>
using namespace std;
int main(){
    long long n ;
    cin>>n;
    long long ans = 1;

    for(long long i =0; i<n; i++){
        ans *= 2;
    }
    cout<<ans;
}