#include <iostream>
using namespace std;

void printArr(int *ptr, int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << ptr[i] << " ";
    }
    cout << endl;
}

int binSearch(int *arr, int n, int key)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (key == arr[mid])
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{

    double a = 25;

    double *ptr = &a;
    cout << sizeof(double)<< endl;

    cout << ptr << " " << *ptr << endl;
    ptr+=3;
    cout << ptr << " " << *ptr << endl;
    ptr-=3;
    cout << ptr << " " << *ptr << endl;

    return 0;
}

/*

time-complexity - input size + number of operation

space complexity - input size  + extra space




*/