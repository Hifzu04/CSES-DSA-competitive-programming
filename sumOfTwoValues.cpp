#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, x;
    cin >> n >> x;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    int l = 0;
    int r = n-1;
    while (l < r)
    {
        int sum = vec[l] + vec[r];
        if (sum == x)
        {
            cout << l + 1 << " " << r + 1;
            return 0;
        }
        else if (sum < x)
            l++;
        else
            r--;
    }
    cout << "IMPOSSIBLE";
    return 0;
}