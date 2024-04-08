#include<iostream>
using namespace std;

int peak_getter(int arr[] , int size) {
    int low = 0, high = size -1 , mid = 0 , ans = 0;

    while (low < high)
    { 
        mid = low + (high - low) / 2;
 
        if( arr[mid] > arr[ans] ) {
            ans = mid ;
            low = mid + 1;
        } else  {
            high = mid - 1;
           
        }
    }
    cout << ans << endl;
    return ans;
} 

int main(){
    int arr[3] = {1,2,3};

    peak_getter( arr, 3);
    return 0;
}