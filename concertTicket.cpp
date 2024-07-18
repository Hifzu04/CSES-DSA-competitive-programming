#include <bits/stdc++.h>
using namespace std;
//code gives correct output but not in the order as test case . visit concertTicket2.cpp

int  main()
{
    long long n, m;
    cin >> n;
    cin >> m;
    long long arr1[n];
    long long arr2[m];
    for (long long i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (long long i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    sort(arr1, arr1+n);
    sort(arr2 , arr2+m);
    long long p = n-1;
    long long q= m-1;

    while(p>=0){
        if(arr2[q] >= arr1[p]){
            cout<<arr1[p]<<endl;
            q--;
           
        }
        p--;
    }
    
    for(long long i=0 ;i<=q ; i++){
        cout<<-1<<endl;
    }

}