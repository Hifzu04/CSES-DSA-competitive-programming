//think about the time complexity too
#include<set>
#include<iostream>
using namespace std;
int main(){
    int n ; 
    cin>>n;

    int m ;
    cin>>m;
    multiset<int>ticket;

    while(n--){
        int x;
        cin>>x;
        ticket.insert(x);   
    }
    for(int i =0; i<m;i++){
        int t;
        cin>>t;
        auto it = ticket.upper_bound(t);
        if(it == ticket.begin()){
             cout<<-1<<endl;
        }else{
            it--;
            cout<<*it<<endl;
            ticket.erase(it);
        }
    }
    return 0;
}