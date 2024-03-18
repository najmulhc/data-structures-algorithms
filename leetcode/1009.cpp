#include <iostream>
#include <math.h>
using namespace std;

int bitwiseComplement(int n)
{
    long long  bin = 0;
    int i = 0;
    long long  reversed = 0;
    int result = 0;
    while (n > 0)
    {
        int digit = n % 2;
        bin = digit * pow(10, i) + bin;
        cout << bin << endl;
        n /= 2;
        i++;
    }
    cout << "Binary " << bin << endl;
    int j = 0;
    while (bin > 0)
    {
        int digit = bin % 10;
        reversed = (digit ^ 1) * pow(10, j) + reversed;
        bin /= 10;
        j++;
    }
    cout << "Reversed " << reversed << endl;

    int k = 0;
    while (reversed > 0)
    {
        int rem = reversed % 10;
        result = rem * pow(2, k) + result;
        reversed /= 10;
        k++;
    }

    return result;
}

int main()
{
    int res = bitwiseComplement(67185);
    cout << "Result " << res;
    return 0;
}