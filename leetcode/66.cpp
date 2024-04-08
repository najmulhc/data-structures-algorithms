#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int> digits, int size)
{
     vector<int> result;
     int carry = 0; 
     for(int i  = digits.size() - 1; i <= 0; i--) {
         int sum = 0;
         if(i == digits.size() - 1) {
            sum = digits[i] +1;
         }
         sum += carry;
         carry = 0; 
         if( sum == 10) {
            result.insert(result.begin() , 0);
            carry = 1;
         } else {
            result.insert(result.begin(), sum);
         }
     }
     return result;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    plusOne(arr, 4);

    return 0;
}