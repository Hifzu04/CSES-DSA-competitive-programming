#include <bits/stdc++.h>
#define ll long long
using namespace std;
//credit Ragib

int main()
{
    ll t, a, b;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        cin >> a >> b;
        if(a==0 and b==0){
            cout<<"YES"<<endl;
            continue;
        }
        if ((a + b) % 3 != 0 or a == 0 or b == 0 or (a > 2 * b or b > 2 * a))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}