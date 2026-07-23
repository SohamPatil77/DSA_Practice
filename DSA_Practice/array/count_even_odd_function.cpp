#include <iostream>
using namespace std;

void countEvenOdd(int arr[], int n)
{
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << "Even Numbers = " << evenCount << endl;
    cout << "Odd Numbers = " << oddCount << endl;
}

int main()
{
    int arr[] = {2, 5, 7, 8, 10, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    countEvenOdd(arr, n);

    return 0;
}
