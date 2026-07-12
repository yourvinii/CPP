#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number : ";
    cin >> num;
    if (num == 0)
    {
        cout << num << " is zero.";
    }
    else if (num < 0)
    {
        cout << num << " is negative.";
    }
    else if (num > 0)
    {
        cout << num << " is positive.";
    }
    else
    {
        cout << "Invalid Input.";
    }

    return 0;
}
