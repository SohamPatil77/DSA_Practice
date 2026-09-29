#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char helper, char destination)
{
    // Base case
    if (n == 0)
        return;

    // Move n-1 disks from source to helper
    towerOfHanoi(n - 1, source, destination, helper);

    // Move the largest disk to destination
    cout << "Move disk " << n
         << " from " << source
         << " to " << destination << endl;

    // Move n-1 disks from helper to destination
    towerOfHanoi(n - 1, helper, source, destination);
}

int main()
{
    int n = 3;

    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}