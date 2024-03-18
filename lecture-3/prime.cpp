#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n, isPrime =0;
    cin >> n ;
    
    int i = 2;

    while (i < sqrt(n))
    {
        if(n % i == 0)  {
            isPrime = 1;
            break;
        }
i++;
    }

    if (isPrime)
    {
        cout << "It is not a prime Numer" << endl;
    } else {
        cout << "It is a prime number." << endl;
    }
    

    return 0;
}