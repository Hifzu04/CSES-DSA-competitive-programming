#include <iostream>
#define MOD 1000000007
using namespace std;

// Function to perform modular exponentiation
long long mod_exp(long long base, long long exp, long long mod)
{
    long long result = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            // If exp is odd
            result = (result * base) % mod;
        }
        base = (base * base) % mod; // Square the base
        exp /= 2;                   // Divide the exponent by 2
    }
    return result;
}

int main()
{
    long long n;
    cin >> n;
    cout << mod_exp(2, n, MOD); // Calculate 2^n % MOD
    return 0;
}
