#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

long long missingNumber(vector<int>& arr, int n) {
    // Calculate the sum of the first n natural numbers using long long to prevent overflow
    long long total_sum = (long long)n * (n + 1) / 2;
    
    // Calculate the sum of elements in the array using long long to prevent overflow
    long long sum_of_elements = accumulate(arr.begin(), arr.end(), 0LL);
    
    // The missing number is the difference between the expected sum and the actual sum
    return total_sum - sum_of_elements;
}

int main() {
    int n;
    cin >> n; // size of the array plus one

    vector<int> arr(n - 1); // the array has n-1 elements
    for (int i = 0; i < n - 1; ++i) {
        cin >> arr[i];
    }

    long long ans = missingNumber(arr, n);
    cout << ans << endl;

    return 0;
}
