#include <iostream>
using namespace std;

void multipleBy2(int &a, int &b, int &c)
{

    a *= 2;
    b *= 2;
    c *= 2;

    
}

void changeA ( int *ptr){
    *ptr = 20;
    cout << "Change A Function : " << *ptr << endl;

}

int main()
{

    int a = 5;

    changeA(&a);

    cout << "Main Function : " << a;

    // int x = 1, y = 2, z = 3;
    // multipleBy2(x, y, z);

    // cout << x << "\n" <<  y << endl <<  z << "\n";

    return 0;
}