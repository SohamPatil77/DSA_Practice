#include <iostream>
using namespace std;

int missingnumber(int arr[], int size, int n)
{
    int expectednumber = n * (n + 1) / 2;
    int actualsum = 0;

    for (int i = 0; i < size; i++)
    {
        actualsum += arr[i];
    }
    return expectednumber - actualsum;
}

int main()
{
    int arr[] = {1, 2, 4, 5};
    int size = 4;
    int n = 5;

    int answer = missingnumber(arr, size, n);
    cout << "missing no is = " << answer;
    return 0;
}
