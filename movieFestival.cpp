#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool sortComp(pair<int, int> &p1, pair<int, int> &p2)
{
    return p1.second < p2.second;
}

ll solve(int n, vector<pair<int, int>> &vec)
{
    sort(vec.begin(), vec.end(), sortComp);

    ll movie_watched = 0;
    ll movieCnt = 0;
    for (ll i = 0; i < n; i++)
    {
        if (vec[i].first >= movie_watched){
            movieCnt++;
        movie_watched = vec[i].second;
        }
       }
       return movieCnt;
}

int main()
{

    ll n;
    cin >> n;
    vector<pair<int, int>> vec(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> vec[i].first >> vec[i].second;
    }
    cout << solve(n, vec) << endl;
}