#include<iostream>
using namespace std;

bool hasAlternatingBits(int n)
{
    bool result = true;
    // take the last bit of the number
    int last_bit = n&1;
    while( n > 0) {
        n >>=1;
        int set_bit = n&1;
        if(last_bit == set_bit ) {
            return false;
        } else {
            last_bit = !last_bit;
        }
    }
 
    return result;
}

int main(){
    int num ;
    cin >> num ;
    bool test = hasAlternatingBits(num);
    cout << test << endl;
    
    return 0;
}