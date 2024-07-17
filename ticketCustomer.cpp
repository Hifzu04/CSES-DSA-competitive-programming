#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr1[n];
    int arr2[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    sort(arr1, arr1+n);
    sort(arr2 , arr2+m);

    while(n>=0){
        if(arr2[m] >= arr1[n]){
            cout<<arr1[n]<<endl;
            m--;
           
        }
        n--;
    }
    for(int i=0 ;i<m ; i++){
        cout<<-1<<endl;
    }

}