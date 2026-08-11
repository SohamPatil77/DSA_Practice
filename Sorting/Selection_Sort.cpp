/*
    Problem Statement:
    Given an array of n elements, sort the array in ascending order
    using the Selection Sort algorithm.

    Approach:
    1. Start from the first element.
    2. Assume it is the minimum element.
    3. Search the remaining unsorted part to find the actual minimum.
    4. Store the index of the minimum element in minIndex.
    5. Swap the minimum element with the current element.
    6. Repeat the process for the remaining unsorted elements.

    Example:
    Input:  64 25 12 22 11
    Output: 11 12 22 25 64

    Time Complexity: O(n^2)
    Space Complexity: O(1)
*/


#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;

    selectionSort(arr, n);

    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}