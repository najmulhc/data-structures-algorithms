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
        while (j < n)
        {
            if (j > i) // j boro, barte thakbe
            {
                char ch = first_char + n - (j - i) - 1;
                cout << ch;
            }
            else // j choto, komte thakbe
            {
                char ch = first_char + n - (i - j) - 1;
                cout << ch;
            }

            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}
