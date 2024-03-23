#include <iostream>
using namespace std;

bool isPowerOfFour(int n)
{
    if (n == 0)
    {
        return true;
    }
    bool result = false;
    int mask = 0;
    while (mask < n - 1)
    { 
        cout << mask << " masks " << n << endl;
        mask <<= 2;
        mask |= 3;
    }

    return (n & mask) == 0;
}

int main()
{

    bool is4 = isPowerOfFour(-2147483648);
    cout << is4 << endl;
    return 0;
}