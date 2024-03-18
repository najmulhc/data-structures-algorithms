#include <iostream>
using namespace std;

int main()
{
    int n, i = 0, j = 0;
    cin >> n;
    int count = 0;

    while (i < n)
    {
        j = 0;
        while (j < n)
        {
            if (i + j < n - 1)
            {
                cout << " ";
            }
            else
            {
                count++;
                cout << count << " ";
            }
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}