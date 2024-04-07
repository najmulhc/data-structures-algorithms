#include <iostream>
#include <vector>
using namespace std;

// given a rotated sorted array, find the pivot of it
int findPivot(vector<int> arr)
{
    int start = 0, end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        cout << start << " " << mid << " " << end << endl;
        if (arr[start] < arr[mid])
        {
            start = mid;
        }
        else
        {
            end = mid ;
        }

        mid = start + (end - start) / 2;
    }

    return mid;
}

int main()
{
    vector<int> arr = {7, 9, 10, 2, 3, 4, 5, 6};

    int result = findPivot(arr);
    cout << result << endl;

    return 0;
}