/*
=========================================================
Problem    : Array Compression
Platform   : CodeChef
Topic      : Arrays
Subtopic   : Array Traversal
Difficulty : Easy

Approach:
- Traverse the array from left to right.
- Count the number of consecutive groups.
- Each group can be compressed into one element.
- The minimum possible length is the number of groups.

Time Complexity : O(N)
Space Complexity: O(N)
=========================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // If the array is empty (extra safety check)
    if (N == 0) {
        cout << 0;
        return 0;
    }

    int groups = 1;

    for (int i = 1; i < N; i++) {
        if (A[i] != A[i - 1]) {
            groups++;
        }
    }

    cout << groups;

    return 0;
}