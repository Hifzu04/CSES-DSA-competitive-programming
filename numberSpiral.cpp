#include <iostream>
using namespace std;

inline long long diagonalElement(long long x)
{
    return x * x - (x - 1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t, row, col;
    cin >> t;
    for (long long i = 0; i < t; i++)
    {
        cin >> row >> col;
        if (row == col)
        {
            cout << diagonalElement(row) << endl;
        }
        else if (row > col)
        {
            if (row % 2 == 0)
            {
                cout << diagonalElement(row) + (row - col) << endl;
            }
            else
            {
                cout << diagonalElement(row) - (row - col) << endl;
            }
        }
        else
        {
            if (col % 2 == 0)
            {
                cout << diagonalElement(col) - (col - row)<<endl;
            }
            else
            {
                cout << diagonalElement(col) + (col - row)<<endl;
            }
        }
    }

    return 0;
}