#include <iostream>
using namespace std;

int hammingWeight(int n)
{
    int bit_count = 0;
    while (n > 0)
    {
        if (n & 1)
        {
            bit_count++;
        }
    }
    return bit_count;
}

int main()
{

    int result = hammingWeight(111111111111111111111111111110);
    cout << result << endl;
    return 0;
}