#include <iostream>
using namespace std;

void print1toN(int n) {

    // Base case
    if (n == 0)
        return;

    // Recursive call
    print1toN(n - 1);

    // Backtracking
    cout << n << " ";
}

int main() {

    int n;

    cout << "Enter a number: ";
    cin >> n;

    print1toN(n);

    return 0;
}