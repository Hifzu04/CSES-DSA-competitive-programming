#include<iostream>
using namespace std;
int main (){
    string str;
    cin>>str;
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
    //for the case when input has one char ie A , op =1 ;
    maxm = max(count, maxm);
    cout<<maxm;
}