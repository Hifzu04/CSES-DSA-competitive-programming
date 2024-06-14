#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    if (n<4){
        cout<<"NO SOLUTION";
        return 0;
    }
    for (long long i = n; i >= 1; i--)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    for (long long i = n; i >= 1; i--)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
}