#include <bits/stdc++.h>
#define ll long long
using namespace std;

void towerofHanoi(int count, int n, int source, int helper, int dest ){
    if(n==1){
        cout<< count<<"\n";
        cout<<source<<" "<<dest<<"\n";
        return;
    }
    
    towerofHanoi(count, n-1, source, dest, helper);
 //   cout<<source<<" "<<dest<<"\n";      why
    

    cout<<source<<" "<<dest<<"\n";


    towerofHanoi(count , n-1, helper, source, dest);
   // cout<<source<<
    
    

    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ;
    cin>>n;
    
    towerofHanoi(0, n, 1,2,3);


    return 0;
}