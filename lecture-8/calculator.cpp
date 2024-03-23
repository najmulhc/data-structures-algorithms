#include <iostream>
using namespace std;


// program to run a simple calculator using switch case
int main()
{
    int a, b;
    char op;

    cin >> a >> op >> b;
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;

        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;

        break;

    case '%': 
     cout << a % b << endl;
     break;

    default:
        cout << "Invalid operator!" << endl;
        break;
    }

    return 0;
}