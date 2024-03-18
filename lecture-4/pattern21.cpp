#include <iostream>
using namespace std;

int main()
{
    int n, i = 1, j;
    cin >> n;

    while (i <= n)
    {
        j = 1;
        while (j <= (2 * (n - 1) + 1))
        {
            if (i + j < n + 1)
            {
                cout << "   ";
            }
            else if (j - i >= n)
            {
                cout << "   ";
            }
            else
            {
                if (j < n + 1)
                {
                    cout << " " << j - n + i << " ";
                }
                else
                {
                    cout << " " << (n + i) -j
                     << " ";
                }
            }
            j++;
        }

        i++;
        cout << endl;
    }

    return 0;
}