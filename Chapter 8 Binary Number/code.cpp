#include <iostream>
using namespace std;

void decToBin(int decNum)
{
    int n = decNum;

    int binNum = 0;
    int pow = 1;

    while (n > 0)
    {

        int rem = n % 2;
        binNum += rem * pow;
        n /= 2;
        pow *= 10;
    }
    cout << "Decimal to Binary : " << decNum << " "  << binNum << endl;
}

void binToDec(int binNum)
{

    int n = binNum;
    int pow = 1;
    int decNum = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        decNum += lastDigit * pow;
        pow *= 2;
        n /= 10;
    }
    cout << "Binary to Decimal : " << binNum  << " " << decNum << endl;
}

int main()
{

    decToBin(5);
    binToDec(101);

    return 0;
}