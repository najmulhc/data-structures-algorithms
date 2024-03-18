#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int i, j;
    cin >> a;
    cin >> b;
    i = 0;
    j = 0;

    while (i < a)
    {
        while (j < b)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        // reset the new line
        j = 0;
        i++;
    }

    return 0;
}