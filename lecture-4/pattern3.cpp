#include <iostream>
using namespace std;

int main()
{
    int n, i = 1, j = 1;
    cin >> n;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}