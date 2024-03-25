#include <iostream>
using namespace std;

bool search(int arr[], int length, int find)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == find)
        {
            return true; /* code */
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int finder;
    cin >> finder;

    // find if there is finder in the array
    bool found = search(arr, n, finder);
    if (found)
    {
        /* code */
        cout << "The element is in the array. " << endl;
    }
    else
    {
        cout << "Sorry, the element is not in the array. " << endl;
    }

    return 0;
}