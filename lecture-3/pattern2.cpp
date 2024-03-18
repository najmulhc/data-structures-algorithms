#include <iostream>
using namespace std;

int main()
{
    int n, i = 1, j = 1;

    cin >> n;
    // i is row, j is column
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}