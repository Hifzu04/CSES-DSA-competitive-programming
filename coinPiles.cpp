#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t ,a , b;
    cin>>t;
   for(int i =0 ; i<t; i++){
       cin>>a>>b;
       long long sum1 =0 , sum2=0;
       long long p = a;
       long long q = b;
       
       while(a>=0 and b>=0){
        if(a>=b){
            sum1+=2;
            sum2+=1;
            a-=2;
            b-=1;
        }
        else{
          sum2+=2;
            sum1+=1;
            b-=2;
            a-=1;  
        }
       }
       if((sum1==p and  sum2==q) or (sum1==q and sum2==p)){
        cout<<"YES";
       }
       else{
        cout<< "NO";
       }

   } 
}
