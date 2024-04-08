#include <iostream>
#include <vector>
using namespace std;

int maximumCount(vector<int> &arr)
{
    int start = 0, end = arr.size() - 1, mid = 0;
    while (start < end)
    {
        mid = start + (end - start) / 2;
        cout << start << " " << mid << " " << end << endl;
        if (arr[mid] < 0)
        {
            start = mid + 1;
      } else {
        end = mid -1;
      }
      
    }

cout << start << " " << mid << " " << end  << endl;

    return end;
}

int main()
{
    vector<int> arr = { 0, 2, 4, 8, 9};

    int result = maximumCount(arr);
    cout << result << endl;

    return 0;
}