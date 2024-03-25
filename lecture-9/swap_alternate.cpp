#include<iostream>
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

void swap_alternate ( int arr[], int len){
    int i = 0;
    while( i < len) {
        swap(arr[i] , arr[i+1]);
        i += 2;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    swap_alternate( arr, n);

printArr( arr, n);

    return 0;
}