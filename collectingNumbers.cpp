#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int round = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= i)
        {
            round++;
        }
    }
    cout << round;

    return 0;
}