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

    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(int);

    cout << binSearch(arr, n, 16);

    return 0;
}

/*

time-complexity - input size + number of operation

space complexity - input size  + extra space




*/