#include <iostream>
using namespace std;

int largest(int a, int b, int c)
{
    int largestNum;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        largestNum = a;
    }
    else if (b > c)
    {
        largestNum = b;
    }
    else
    {
        largestNum = c;
    }
    return largestNum;
}

char character(char ch)
{
    if (ch == 'Z')
    {
        return 'A';
    }
    else if (ch == 'z')
    {
        return 'a';
    }
    else
    {

        return (ch + 1);
    }
}

int main()
{

    cout << character('Y');
    return 0;
}