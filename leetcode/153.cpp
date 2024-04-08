#include <iostream>
using namespace std;

int findMax(int arr[], int size)
{
    int low = 0, high = size - 1;
    int mid = 0;
    mid = low + (high - low) / 2;
    int ans = 0;
 
    while (low < high)
    {

        mid = low + (high - low) / 2;
        cout << low << " " << mid << " " << high << endl;
        if (arr[mid] > arr[mid - 1]) // mid is higher then the number before
        {
            cout << "Shift to the right" << endl;
            if( mid == size -2 && arr[mid ] < arr[mid + 1] ) {

                return arr[size -1] ;
            }
            if (arr[ans] < arr[mid])
            {
                ans = mid;
            }
            low = mid +1 ;
        }
        else if(arr[mid] < arr[mid -1])
        { 
           
            high = mid ;
        }
    }
    
    return arr[mid];
}

int main()
{

    int numbers[7] = {4, 5, 6, 7, 0, 1, 2};

    int result = findMax(numbers,7);

    cout << result << endl;

    bool test = "a" +1;
    cout << test << endl;

    return 0;
}