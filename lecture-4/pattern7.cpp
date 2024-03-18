#include <iostream>
using namespace std;

int main()
{
    int n;
    char firstChar = 'A';
    cin >> n;
    int i = 0, j = 1;
    while (i <= n)
    {

        while (j <= n)
        {
            char ch = firstChar + i;
            cout << ch;
            j++;
        }
        cout << endl;
        j = 1;
        i++;
    }

    return 0;
}