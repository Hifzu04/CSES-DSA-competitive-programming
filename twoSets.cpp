#include <iostream>

using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long sum = (n * (n + 1)) / 2;
    if (sum % 2 != 0)
    {
        cout << "NO";
        return 0;
    }
    else
    {
        cout << "YES" << endl;
        cout << n / 2 << endl; // size of the first set
        for (long long i = n; i > n - n / 4; i--)
        {
            cout << i << " ";
            cout << n - i + 1 << " ";
        }
        if (n % 2 != 0)
        {
            cout << n - n / 4 << endl;
            cout << n / 2 + 1 << endl; // size of the second set
        }
        else
        {
            cout<<endl;
            cout << n / 2 << endl; // size of the second set
        }

        for (long long i = n / 4 + 1; i < n - n / 4; i++)
        {
            cout << i << " ";
        }
        if (n % 2 == 0)
        {
            cout << n - n / 4 << endl;
        }
    }
    return 0;
}