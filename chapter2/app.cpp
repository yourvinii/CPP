#include <iostream>
#include <iomanip>
#define PI 3.14
using namespace std;

int main()
{
    float a = 99.1234567890; 
    double b = 99.1234567890123;

    cout << setprecision(12) << a << endl;
    cout << setprecision(12) << b << endl;
    return 0;
}