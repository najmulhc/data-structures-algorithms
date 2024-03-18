#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    i = 0, j = 0;
    while (i < n)
    {
        j = 0;
        while (j < n)
        {
            if (j < i)
            {
                cout << " ";
            }
            else
            {
                cout << i +1;
            }
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}