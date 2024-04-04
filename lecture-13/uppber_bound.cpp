#include <iostream>
using namespace std;

void upper_bound(int arr[], int size, int n)
{
    int l = 0, h = size - 1, m = 0, ans = size;
   
    while (l <= h)
    {  

        m = (l + h) / 2;
      cout << l<< m << h << endl;
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

 

int main()
{
    int arr[8] = { 1,1,1,1,1,1,1,1, };

    upper_bound(arr, 8,1);

    return 0;
}