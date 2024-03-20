#include<iostream>
using namespace std;
int findComplement(int num)
{
    int mask = 0;
    int copy = num;
    if (num == 0)
    {
        return 0;
    }
    while (num > 0)
    {
        mask <<= 1;
        mask = mask ^ 1;

        num >>= 1;
    }
    return copy ^ mask;
}

int main () {

    int number = findComplement(12);
    cout << number << endl;
    return 0;
}
