#include <iostream>
using namespace std;

int main()
{
    int n, i = 0, j = 0;
    cin >> n;
    j = n;

    char first_char = 'A';

    while (j >= 1)
    {
        cout << j;
        char ch = first_char - j + n;
        cout << ch << endl;

        j--;
    }
    j = 2;
    while (j <= n)
    {
        cout << j;
        char ch = first_char - j + n;
        cout << ch << endl;
        j++;
    }

    return 0;
}