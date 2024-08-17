#include <iostream>
using namespace std;
int lastocc(int arr[], int s, int e, int key)
{
    // base case

    if (s > e)
    {
        // if not found
        return -1;
    }
    // int last = -1;

    int mid = (s + e) / 2;

    if (arr[mid] == key)
    {
    // last = mid;
        int last = lastocc(arr, mid + 1, e, 5);
        if (last != -1)
        {
            return last;
        }
        return mid;
    }
    else if (arr[mid] < key)
    {
        lastocc(arr, s, mid - 1, 5);
    }
    else if (arr[mid] > key)
    {
        lastocc(arr, mid + 1, e, 5);
    }
    //return last;
}
int firstocc(int arr[], int s, int e, int key)
{
    // base case
    if (s >= e)
    {
        return 0;
    }
    int ans = -1;
    int mid = (s + e) / 2;
    if (arr[mid] == key)
    {
        ans = mid;
        firstocc(arr, s, mid - 1, 5);
    }
    else if (arr[mid] < key)
    {
        firstocc(arr, mid + 1, e, 5);
    }
    else if (arr[mid] > key)
    {
        firstocc(arr, s, mid - 1, 5);
    }
    return ans;
}
int main()
{
    int arr[7] = {2, 3, 4, 5, 5, 5, 6};
    int n = 7;
    int ans1 = firstocc(arr, 0, n - 1, 5);
    cout << "first occurance" << ans1 << endl;
    int ans2 = lastocc(arr, 0, n - 1, 5);
    cout << " last occurance " << ans2;
}