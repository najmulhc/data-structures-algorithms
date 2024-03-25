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

void update_arr(int arr[])
{
    cout << arr ; // array ka first address print kar de ga 
}

int main()
{
    int arr[10] = {5, 2};
 cout << arr;
    return 0;
  
}