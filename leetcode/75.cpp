#include <iostream>
using namespace std;


void sortColors(int nums[], int size)
{
    int ones = 0, zeros = 0, twos = 0;
    for (int i = 0; i < size; i++)
    {
        switch (nums[i])
        {
        case 0:
            zeros++;
            break;
        case 1:
            ones++;
            break;
        default:
            twos++;
            break;
        }
    }
    for (int j = 0; j < size; j++)
    {
        if (zeros > 0)
        {
            nums[j] = 0;
            zeros--;
        }
        else if (ones > 0)
        {
            nums[j] = 1;
            ones--;
        }
        else
        {
            nums[j] == 2;
            twos--;
        }
    }
}
int main()
{
    int arr[6] = {1, 2, 0, 1, 2, 2};
    sortColors(arr, 6);
    return 0;
}