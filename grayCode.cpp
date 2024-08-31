#include <bits/stdc++.h>
#define ll long long
using namespace std;

// bitset<64>(i).to_string() converts the integer i to a 64-bit binary string.
// binary.substr(64 - n) extracts the last n bits from the string, which represents the binary number as if it was a bitset<n>.

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    ll totalBit = pow(2, n);

    for (ll i = 0; i < totalBit; i++)
    {

        // bitset<2> binary(i);

        string binary = bitset<16>(i).to_string();
        cout << binary.substr(16 - n) << endl;
    }

    return 0;
}