#include <iostream>
using namespace std;

int reverse(int x)
{
    bool is_neg = false;
    int result = 0;
    if (x < 0)
    {
        is_neg = true;
        x = (~(x) + 1);
    }
    while (x > 0)
    {
        int carry = x % 10;
        result = result * 10 + carry;
        x /= 10;
    }

    if (result > INT_MAX || result < INT_MIN)
    {
        result = 0;
    }
    if (is_neg)
    {
        result = (~(result) + 1);
    }

    return result;
}

int main()
{

    int result = reverse(1534236469);
    cout << result << endl;
    return 0;
}