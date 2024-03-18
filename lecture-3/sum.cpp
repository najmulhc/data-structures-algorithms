#include<iostream>
using namespace std;

int main(){
    int i = 1, sum = 0, n;
    cin >> n ;
    while (sum < n)
    {
     sum += i ;
     i++;
     cout << "The current value of sum is "  << sum << endl;
    }
    cout << "The task ended in " << i << " Operations" << endl;
    
    return 0;
}