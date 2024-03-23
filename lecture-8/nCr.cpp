#include <iostream>
using namespace std;

int factorial(int i)
{
    if (i == 1)
    {
        return 1;
    }
    return i * factorial(i - 1);
}

int nCr(int n, int r)
{
    int result = factorial(n) / (factorial(r) * factorial(n - r));
    return result;
}
int main()
{

    int secend = nCr(5, 2);
    cout << secend << endl;
    return 0;
}