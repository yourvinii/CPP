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

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*

time-complexity - input size + number of operation

space complexity - input size  + extra space




*/