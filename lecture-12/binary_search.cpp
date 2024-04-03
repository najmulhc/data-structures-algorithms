#include <iostream>
using namespace std;

bool binarySearch(int arr[], int key, int size)
{
    // find the mid
    // compare with the key
    // decide the path
    int mid = size / 2;
    int start = 0, end = size - 1;

    while (size > 0)
    {
        cout << "Size is now " << size << endl;
        cout << "Mid is now " << mid << endl;
        if (arr[mid] > key)
        { // if the mid is bigger, we need to see teh left side
            end = mid - 1;
        }
        else if (arr[mid] < key)
        { // now the number is bigger then mid, we need to see the right side.
            start = mid + 1;
        }
        else
        {
            return true;
        }

        mid = (start + end) / 2;
        size /= 2;
    }
 return false;
}

int main()
{

    int arr[12] = {1, 3, 5, 6, 8, 10, 11, 13, 15, 16, 18, 20};
    int key;
cin >> key ;
    bool isFound = binarySearch(arr, key, 12);
    cout << isFound << endl;

    return 0;
}