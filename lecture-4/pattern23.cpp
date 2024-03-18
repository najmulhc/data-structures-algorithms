#include <iostream>
using namespace std;

int main()
{
    int n, i = 1, j = 1;
    cin >> n;

    while (i <= n)
    {
        j = 1;
        while (j <= 2 * n)
        {
            if (j <= n)
            {
                if (i + j > n + 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << j;
                }
            }
            else
            {

                int k = n - j + n + 1;
                int l = j - n;
                if (l < i)
                {
                    cout << "*";
                }
                else
                {
                    cout << k;
                }
            }
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}