#include <iostream>
using namespace std;

int main()
{
    int n, j = 0, i = 0;
    cin >> n;
    while (i < n)
    {
        j = 0;
        while (j < n)
        {
            if (i +j > n -1)
            {
                cout << " ";
            }
            else
            {
                cout << i+1 ;
            }
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}