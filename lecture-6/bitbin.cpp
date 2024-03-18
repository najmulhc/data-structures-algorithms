#include<iostream>
#include<math.h>
using namespace std;

int bitbin (int n ) {
    int result = 0;
 int i = 0;
    while (n > 0) 
    {
        int digit = n & 1 ; 
        result =  result  + pow(10, i) * digit;
        n = n >> 1;
        i++;
    }
    return result;
}

int shiftRight (int n) {
    int i = 1;
    while (i < 5)
    {
     int bin = bitbin(n);
     cout << ((n&1)&1) << endl;
     n = n << 1;
     i++;
    }
    return 0;
}

int main(){
    int binary = shiftRight(8);
    cout << binary << endl;
    
    return 0;
}