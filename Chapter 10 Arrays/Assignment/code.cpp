/*
// sub array

#include <iostream>
using namespace std;

void printSubArr(int *ptr, int n)
{
    for (int start = 0; start < n; start++)
    {
        cout << start << " = " ;
        for (int end = start; end < n; end++)
        {
            // cout << "["  << end << ']';
            for(int i=start;i<=end;i++){
                cout << ptr[i]  ;
            }
            cout << ", ";
        }
        cout << endl;
    }
}

int main()
{

int arr[] = {1, 2, 3, 4, 5};
int n = sizeof(arr) / sizeof(int);
printSubArr(arr, n);
return 0;
}
*/

//  max subarray sub
#include <iostream>
using namespace std;

void maxSubArrSum(int *ptr, int n)
{
    int maxSum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int curSum = 0;
            for (int i = start; i <= end; i++)
            {
                curSum += ptr[i];
            }
            cout << curSum << ", ";
            maxSum = max(curSum, maxSum);
        }
        cout << endl;
    }
    cout << "Maximum Sub array sum : " << maxSum << endl;
}

void kadAlog(int *ptr, int n)
{
    int currSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum += ptr[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        maxSum = max(currSum, maxSum);
    }
    cout << "maximum subarray sum : " << maxSum;
}

// kadane's  Algorithm
void kadaneAlogrithm(int *ptr, int n)
{
    int currSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum += ptr[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        maxSum = max(currSum, maxSum);
    }
    cout << "Maximum Subarray Sum : " << maxSum << endl;
}

int main()
{

    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    kadaneAlogrithm(arr, n);
    return 0;
}