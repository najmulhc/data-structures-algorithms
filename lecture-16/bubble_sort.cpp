#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

vector<int> bubbleSort(vector<int> arr)
{
    for (int i = arr.size() - 1; i > 0; i--)
    {
        for (int j = 0; j < i +1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        print(arr);
    }
    return arr;
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    print(arr);
    vector<int> returned = bubbleSort(arr);

    print(returned);

    return 0;
}