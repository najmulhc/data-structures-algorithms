#include <iostream>
using namespace std;

int main()
{
    int n, i = 1, j = 1, count = 1;
    cin >> n;

    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << " " << count;
            count++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
