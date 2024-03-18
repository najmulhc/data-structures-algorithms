#include <iostream>
using namespace std;

int main()
{
    // int i = 1, j = 1, n;
    // cin >> n;
    // while (i <= n)
    // {
    //     j = 1;
    //     while (j <= i)
    //     {
    //         cout << j + i - 1;
           
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    int n;
    cin >> n ;  
    int col= 1, row=1;
    int value = 1;
    while (row <= n)
    {
        col = 1 ;
        value = row ; 
        while (col <= row) 
        {
            cout << value;
            value++;
            col++;
        }
        cout  << endl;
    row++;    
    }

    
    

    return 0;
}