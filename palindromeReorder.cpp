#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin >> str;

    // cout<<string(3 , 'a');
    unordered_map<char, ll> mpp;
    for (char c : str)
    {
        mpp[c]++;
    }
    ll count = 0;
    char centerChar = 'p';
    for (auto it : mpp)
    {
        if (it.second % 2 != 0)
        {
            count++;
            centerChar = it.first;
           
            if (count > 1)
            {
                cout << "NO SOLUTION";
                return 0;
            }
        }
    }
    string firsthalf = "";
    for (auto it : mpp)
    {
        firsthalf += string(it.second / 2, it.first);
    }
     string secondhalf = "";
    for(ll i =firsthalf.length()-1 ;i>= 0 ; i--){
       secondhalf +=firsthalf[i];
    }

   
   
     if(str.length() %2 ==0 ){
        cout<<firsthalf+secondhalf;
     }else{
            cout << firsthalf+centerChar+secondhalf;
     }
     

    return 0;
}