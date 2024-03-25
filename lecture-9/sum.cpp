#include<iostream>
using namespace std;

int get_sum( int arr[] , int len) {
    int sum = 0 ;
    for (int i = 0; i < len;  i++)
     {
         /* code */
         sum += arr[i];
    }
    return sum;
}

int main(){
    
    int n; 
    cin >> n  ;
    int arr[n] ;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = get_sum(arr, n);
    cout << sum << endl;
    
    
    return 0;
}