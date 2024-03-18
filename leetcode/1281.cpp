#include <iostream>
using namespace std;

int subtractProductAndSum(int n)
{
    int sum = 0;
    int product = 1;
    int temp = 0;

    for (; n > 0; n = n / 10)
    {
        temp = n % 10;
        sum += temp;

        product *= temp;
    }
    return product - sum;
}

int main()
{

    int res = subtractProductAndSum(705);
    cout << "final result " << res << endl;
    return 0;
}