#include <bits/stdc++.h>
#define ll long long
using namespace std;

// bitset<64>(i).to_string() converts the integer i to a 64-bit binary string.
// binary.substr(64 - n) extracts the last n bits from the string, which represents the binary number as if it was a bitset<n>.

vector<string> generateGraycode(int n)
{
   
    //base case 
    if(n==1){
      return {"0" , "1"};
    }
    
    vector<string>fianlresult;
    vector<string>result;
    result = generateGraycode(n-1);

    for(int i =0 ; i < result.size() ; i++){
        fianlresult.push_back("0" + result[i]);
    }
    for(int i= result.size()-1 ; i>=0 ; i--){
        fianlresult.push_back("1" + result[i]);
    }
 

    return fianlresult;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    vector<string> graycode = generateGraycode(n);

    for(auto it : graycode){
        cout<<it<<"\n";
    }

    return 0;
}