#include <iostream>
using namespace std;

int main()
{
    int n, i = 0, j = 0;
    cin >> n;
    char firstChar = 'A';
    while (i < n)
    {
        j = 0;
        while (j < n)
        {
            char ch = firstChar + i + j;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}