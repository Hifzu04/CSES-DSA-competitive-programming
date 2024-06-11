#include <iostream>
using namespace std;

int main() {
    long long n;  // Using long long to handle larger intermediate values
    cin >> n;
    while (n != 1) {
        cout << n << " ";
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = n * 3 + 1;
        }
    }
    cout << n << endl;  // Printing the final 1
    return 0;
}
