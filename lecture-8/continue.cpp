#include <iostream>
using namespace std;

int main()
{
    int number = 3;

    switch (number)
    {
    case 1:
        cout << "the number is one" << endl;
        break;
    case 2:
        cout << "the number is two" << endl;

    case 3:
        cout << "the number is three " << endl;
        continue; 
    case 4:
        cout << "the number is four" << endl;
    default:
        cout << "the number is not in the range" << endl;
        break;
    }

    return 0;
}