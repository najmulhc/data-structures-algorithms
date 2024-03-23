#include <iostream>
using namespace std;

// the program tests if the given variable a number or a character.

int main()
{
  //  char symbol = '1';
  int symbol = 1;

    switch (symbol)
    {
    case '1':
        cout << "The symbol is taken as a character." << endl;
        break;
    case 1:
        cout << "The given symbol is a integer." << endl;

    default:
        break;
    }

    return 0;
}