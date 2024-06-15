#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    if (n < 4)
    {
        if (n == 1)
        {
            cout << n;
        }
        else
        {
            cout << "NO SOLUTION";
            
        }
        return 0;
    }
   // writing even numbers
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
 
    // writing odd numbers
    for (int i = 1; i <= n; i += 2) {
        cout << i << " ";
    }
}