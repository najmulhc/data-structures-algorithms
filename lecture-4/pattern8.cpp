#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 0, j = 0;
    char first_char = 'A';
    cin >> n;
    while (i < n)
    {
        j = 0;
        while (j < n)
        {
            char ch = first_char + j;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}