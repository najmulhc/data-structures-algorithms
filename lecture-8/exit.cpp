#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    while (1)
    {
        switch (n)
        {
        case 10:
            cout << "It is 10" << endl;
            break;
        case 5:
            cout << "The number is five." << endl;
            break;
        case 0:
            cout << "We have reached zero" << endl;
            exit(1); // breaks an infinite loop when 
        default:
            cout << "The switch is working" << endl;
            break;
        }
        n--;
    }

    return 0;
}