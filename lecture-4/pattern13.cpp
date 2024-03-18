#include <iostream>
using namespace std;

int main()
{
    int n, i = 0, j = 0;
    char first_char = 'A';
    cin >> n;
    while (i < n)
    {
        j = 0;
        while (j <= i)
        {
            char ch = first_char + n - 1 - (i - j);
            cout << ch;
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}