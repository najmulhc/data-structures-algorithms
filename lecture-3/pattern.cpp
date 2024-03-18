#include <iostream>
using namespace std;

int main()
{

    int a;
    int i = 0, j = 0;

    cin >> a;
    while (i < a)
    {
        while (j < a)
        {
            cout << "*";
            j++;
        }
        j = 0;
        i++;
        cout << endl;
    }

    return 0;
}