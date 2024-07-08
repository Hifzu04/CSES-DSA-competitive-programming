#include <bits/stdc++.h>
#define ll long long
using namespace std;

//tle

int main()
{
    ll t, a, b;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        cin >> a >> b;
        bool mark =0;
        for (ll i = 0; i <= a / 2; i++)
        {
            
            if ((b == ((2 * a) - (3 * i))) and (b>=a))
            {
                cout << "YES"<<endl;
                mark =1 ;
                break;
                
                
            }
            if((b<a) and a==2*b - 3*i){
                cout<<"YES"<<endl;
                mark =1 ;
                break;
            }
            
        }
        if(!mark){
            cout<<"NO"<<endl;
        }
        
    }
}
