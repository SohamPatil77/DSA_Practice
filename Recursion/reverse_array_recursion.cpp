#include <iostream>
using namespace std;

void reverseArray(int a[], int l, int r)
{
    // Stop when pointers meet or cross
    if (l >= r)
        return;

    // Swap first and last
    swap(a[l], a[r]);

    // Move towards the center
    reverseArray(a, l + 1, r - 1);
}

int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;

    int a[100];

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    reverseArray(a, 0, n - 1);

    cout << "Reversed Array: ";

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}