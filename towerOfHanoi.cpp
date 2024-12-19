#include <bits/stdc++.h>
#define ll long long
using namespace std;

void towerofHanoi(vector<pair<int, int>>& moves, int n, int source, int helper, int dest ){
    if(n==1){
         moves.emplace_back(source,dest);
        //cout<<"a"<<"\n";
        return;
    }
    
    towerofHanoi(moves, n-1, source, dest, helper);
   //cout<<"b"<<"\n";
    

    moves.emplace_back(source,dest);


    towerofHanoi(moves , n-1, helper, source, dest);
    //cout<<"c"<<"\n";
    
    

    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ;
    cin>>n;
    vector<pair<int , int>>moves;
    
    towerofHanoi(moves, n, 1,2,3);

    cout<<moves.size()<<"\n";
    for(auto it : moves){
        cout<<it.first<<" "<<it.second<<"\n";
    }


    return 0;
}