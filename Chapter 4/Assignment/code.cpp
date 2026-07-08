#include <iostream>
using namespace std;

int main()
{
    int option, a, b, age, num;

    cout << "Choose options   (1-3)  \n*******************\n 1 for larger of two numbers \n*******************\n 2 for - even odd \n*******************\n 3 for voting eligibility \n*******************\n select : ";
    cin >> option;

    switch (option)
    {
    case 1:
    {
        cout << "Enter first Number : ";
        cin >> a;
        cout << "Enter second Number : ";
        cin >> b;

        if (a > b)
        {
            cout << "Larger is  : " << a;
        }
        else
        {
            cout << "Larger is : " << b;
        }
    }
    break;
    case 2:
    {
        cout << "Enter a number : ";
        cin >> num;
        if (num % 2 == 0)
        {
            cout << num << "is even Number";
        }
        else
        {
            cout << num << "is odd number ";
        }
    }
    break;
    case 3:
    {
        cout << "Enter Your Age : ";
        cin >> age;

        if (age >= 18)
        {
            cout << "Eligible for voting";
        }
        else
        {
            cout << "Not Eligible for voting";
        }
    }
    break;
    default:
    {
        cout << "Choose Valid option";
    }
    }

    return 0;
}