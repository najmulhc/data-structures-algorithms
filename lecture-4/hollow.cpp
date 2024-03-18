#include <iostream>
using namespace std;

int main()
{
    int n, i = 1, j = 1;
    cin >> n;

    while (i < 2 * n + 1)
    {
        j = 1;
        while (j < 2 * n + 1)
        {
            if (i <= n && j <= n && i + j < n + 2)
            {
                cout << " ";
            }
            else if (i <= n && j > n && j - n >= i)
            {
                cout << " ";
            }
            else if (i > n && j > n && i - n + j - n > n)
            {
                cout << " ";
            }
            else if (i > n && j <= n && j <= i - n)
            {
                cout << " ";
            }
            else
            {
                cout << "#";
            }

            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}