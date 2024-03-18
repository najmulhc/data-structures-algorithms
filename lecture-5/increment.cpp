#include <iostream>
using namespace std;

int main()
{
    int i = 10;

    int pre_increment = ++i;  // 11
    int post_increment = i++; // 10

    int pre_decrement = --i;  // 9
    int post_decrement = i--; // 10

    return 0;
}