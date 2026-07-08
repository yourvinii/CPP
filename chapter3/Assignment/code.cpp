#include <iostream>
#define MAX 100
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers : " << endl;
    cin >> a >> b;

    cout << (a > b) << endl;
    cout << (a < b) << endl;
    cout << (a == b) << endl;
    cout << (a != b) << endl;

    return 0;
}