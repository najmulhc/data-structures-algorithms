#include<iostream>
using namespace std;

int main(){
    int n, i, j;
    cin >> n ;
i =0, j=0;
    while (i < n)
    {
        j =0;
        while (j < n)
        {
            if(j < i) {
                cout << " ";
            }else {
                cout << j+1;
            }
            j++;
        }
        i++;
        cout << endl;
    }
    
    
    return 0;
}