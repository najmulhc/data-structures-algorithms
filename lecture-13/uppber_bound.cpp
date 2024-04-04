#include <iostream>
using namespace std;

void uppber_bound(int arr[], int size, int n)
{
    int l = 0, h = size - 1, m = 0, ans = -1;

    while (l <= h)
    {

        m = (l + h) / 2;
      
        if (arr[m] < n)
        {
            l = m + 1;
        }
        else if (arr[m] == n)
        {
            ans = m;
            l = m + 1;
        }
        else
        { // if arr[m] > n
            h = m - 1;
        }
    }
    cout << ans << endl;
}

void lowe_bound(int arr[], int size, int n) // find m: the lowest value where arr[m] <= n
{
    int l = 0, h = size - 1, ans = size, m = 0;
    while (l <= h)
    {
        m = (l + h) / 2;
        if (arr[m] > n)
        {
            h = m - 1;
        }
        else if (arr[m] == n)
        {
            ans = m;
            h = m - 1;
        }
        else
        { // when arr[m] < n
            l = m + 1;
        }
    }
    cout << ans << endl;
}

int main()
{
    int arr[6] = {5, 7, 7, 7, 8, 10};
    uppber_bound(arr, 6, 7);
    lowe_bound(arr,6,7);

    return 0;
}