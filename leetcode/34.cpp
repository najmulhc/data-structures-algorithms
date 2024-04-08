#include <iostream>
using namespace std;

void printFirst(int arr[], int size, int target)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    vector<int> ans = {-1 , -1};

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans[0] = mid;
            end = mid - 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    cout << ans << endl;

    start = 0, end = size - 1;
    mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] == target)
        {
            ans[1] = mid;
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid;
        }
        else
        {
            start = mid;
        }
        mid = start + (end - start) / 2;
    }
     return ans;
}

// void printLast(int arr[], int size, int target)
// {
//     start = 0, end = size - 1;
//       mid = start + (end - start) / 2;

 

//     while (start < end)
//     {
//         if (arr[mid] == target)
//         {
//             ans = mid;
//             start = mid + 1;
//         }
//         else if (arr[mid] > target)
//         {
//             end = mid;
//         }
//         else
//         {
//             start = mid;
//         }
//         mid = start + (end - start) / 2;
//     }
//     cout << ans << endl;
// }
int main()
{
    int arr[6] = {5, 6, 6, 6, 8, 10};
    printFirst(arr, 6, 6);
   // printLast(arr, 6, 6);
    return 0;
}