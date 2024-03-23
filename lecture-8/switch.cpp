#include <iostream>
using namespace std;

int main()
{
    int num =-34;

    switch(num) {
        case 0 : 
        cout << "The number is zero." << endl;
        break;
        case  -324 : 
        cout << "The number is negative" << endl;
        break;
        default: 
        cout << "The number is a positive integer." << endl;

    }
    
    return 0;
}