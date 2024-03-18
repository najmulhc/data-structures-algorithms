#include<iostream>
using namespace std;

int main(){
    float n , i=0;
    float cel; 
    cin >> n ;
    while (i <= n)  
    {
        cel = ( i-32) /9*5;
        cout << i << " fareignheigt is " << cel << " celcius." << endl; 
        i++;
    }
    
    
    return 0;
}