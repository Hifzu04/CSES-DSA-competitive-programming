#include<iostream>
using namespace std;
int main (){
    string str;
    cin>>str;
    //cout<<str.length();
    
    int maxm =0;
    int count =1;
    for (int i = 0 ; i<str.length()-1 ; i++){
          if(str[i]==str[i+1]){
              count++;
          }
          else{
            maxm = max(count , maxm);
            count =1;
          }
       maxm = max(count, maxm);    
    }
    cout<<maxm;
}