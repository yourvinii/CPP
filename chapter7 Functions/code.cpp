#include <iostream>
#include <cmath>
using namespace std;

int Fact(int n)
{

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int binoCoeffi(int n, int r)
{
    int value1 = Fact(n);
    int value2 = Fact(r);
    int value3 = Fact(n - r);

    int result = value1 / (value2 * value3);
    return result;
}

int main()
{
    cout << binoCoeffi(4, 2);

    return 0;
}