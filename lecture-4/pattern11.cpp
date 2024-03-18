#include<iostream>
using namespace std;

int main(){
    int n, i =0, j =0 ;
    cin >> n ;

    char first_char = 'A';
    while (i < n)
    {
        j =0;
        while (j <= i)
        {
            char ch = first_char + i;
            cout << ch;
            j++;
        }
        cout  << endl;  
        i++;
    }
    

        return 0;
}