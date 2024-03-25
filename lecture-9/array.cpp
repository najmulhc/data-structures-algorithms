#include<iostream>
using namespace std;

int main(){
   int arr[5] = {[0] = 2, [1 ...3] =4  , [4] = 100};
    for(int i = 0 ; i < 3; i++) {
        cout << arr[i] << endl;
    }
    
    return 0;
}