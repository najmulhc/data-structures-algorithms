#include <iostream>
using namespace std;

int main()
{
    int n, i = 0, j = 0;
    cin >> n;
    i = n;

    while (i > 0)
    {
        j = i;
        while (j > 0)
        {
            cout << "*";
            j--;
        }
        cout << endl;
        i--;
    }

    return 0;
}