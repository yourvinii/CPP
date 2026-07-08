#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char ch;
    cout << "Enter First Number : ";
    cin >> a;
    cout << "Enter Operator ( + - * / %) ";
    cin >> ch;
    cout << "Enter second Number : ";
    cin >> b;

    switch (ch)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;

        break;
    case '*':
        cout << a * b;

        break;
    case '/':
        cout << a / b;

        break;
    case '%':
        cout << a % b;

        break;

    default:
        cout << "Invalid";
    }

    return 0;
}