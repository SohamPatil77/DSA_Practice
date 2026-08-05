#include <iostream>
using namespace std;

void print1ToN(int i, int n) {
    
    if (i > n)
        return;

    cout << i << " ";      // Print current number

    print1ToN(i + 1, n);        // Recursive call

}

int main() {
    int n;
    cin >> n;

    print1ToN(1, n);

    return 0;
}