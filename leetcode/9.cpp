#include <iostream>
#include <math.h>
using namespace std;

bool isPalindrome(int x)
{
    if (x < 0 || x % 10 == 0)
    {
        return false;
    }

    int palindrome = 0;
    int i = 0;
    while (x > 0)

    {
        int reminder = x % 10;
        palindrome = palindrome * 10 + reminder;
        cout << reminder << endl;
        i++;
        x /= 10;
        cout << "Palindrome = " << palindrome << endl;
        cout << "X = " << x << endl;
        if (x == palindrome )
        {
            return true;
        }
        else if (palindrome > x)
        {
            return false;
        }
     
    }
    return false;
}

int main()
{
    int ans = isPalindrome(121);
    cout << ans << endl;
    return 0;
}