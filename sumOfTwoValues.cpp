#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(long long key, long long arr[], long long n)
{
    long long s = 0;
    sort(arr.begin , arr.end , )
    while(s<n){
        if(key==arr[s]){
            return arr[s] ;
        }
        else if (key<arr[s]){
            
        }
    }
}
int main()
{
    long long n, x;
    cin >> n >> x;
    long long arr[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (long long i = 0; i < n; i++)
    {
        long long key = x - arr[i];

        int it = binarySearch(key, arr, n);

        // long long *it = find(arr, arr + n, key);
        //  // //cout<<*it<<endl;
        //  // if (it != arr+ n &&  i != (it-arr))
        //  // {
        //  //     cout <<i+1<<" "<< (it-arr)+1;
        //  //     return 0;
        //  // }
    }
    cout << "IMPOSSIBLE";
    return 0;
}