#include <iostream>
using namespace std;

int main()
{
    int n, count = 0, j = 0, i = 0;
    cin >> n;
    char first_char = 'A';
    while (i < n)
    {
        j = 0;
        while (j <= i)
        {
            char ch = first_char + count;
            cout << ch;
            count++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}