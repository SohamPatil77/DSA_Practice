/*
    Problem Statement:
    Given an array of n elements, sort the array in ascending
    order using the Insertion Sort algorithm.

    Approach:
    1. Consider the first element as already sorted.
    2. Start from the second element of the array.
    3. Store the current element in a variable called 'key'.
    4. Compare the key with the elements before it.
    5. If an element is greater than the key, shift it one
       position to the right.
    6. Continue until the correct position for the key is found.
    7. Insert the key at its correct position.
    8. Repeat until the entire array is sorted.

    Example:
    Input:  5 3 4 1 2
    Output: 1 2 3 4 5

    Time Complexity:
    Best Case:    O(n)
    Average Case: O(n^2)
    Worst Case:   O(n^2)

    Space Complexity:
    O(1)

    Sorting Type:
    In-place Sorting

    Stable:
    Yes
*/

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {5, 3, 4, 1, 2};
    int n = 5;

    insertionSort(arr, n);

    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}