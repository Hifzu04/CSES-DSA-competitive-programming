#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, a, b;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        cin>>a>>b;
        if (a % 3 == 2 and b % 3 == 1 and a<=2*b and ( a!=0 and b!=0))
        {
            cout << "YES" << endl;
        }
        else if ((a % 3 == 1) and (b % 3 == 2) and (b<=2*a) and ( a!=0 and b!=0))
        {
            cout << "YES" << endl;
        }
        else if (a % 3 == 0 and b % 3 == 0 and  ( a!=0 and b!=0) )
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}