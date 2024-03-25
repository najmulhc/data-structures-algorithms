#include <iostream>
using namespace std;
void printArr(int arr[], int length)
{
    cout << "Printing the arry" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
}

void reverse(int arr[], int len)
{
    for (int i = 0; i * 2 < len; i++)
    {
        int temp = arr[len - (i + 1)];
        arr[len - (i + 1)] = arr[i];
        arr[i] = temp;
    }
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
     reverse( arr, n);
     printArr( arr, n);
    return 0;
}