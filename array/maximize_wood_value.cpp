/*
=========================================================
Problem    : Maximize Wood Value
Platform   : CodeChef
Topic      : Dynamic Programming
Subtopic   : Rod Cutting
Difficulty : Medium

Approach:
- Use Dynamic Programming.
- dp[i] stores the maximum value obtainable from a rod of
  length i.
- For every possible first cut, calculate the revenue and
  keep the maximum.

Time Complexity : O(N²)
Space Complexity: O(N)
=========================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> price(N);

    for (int i = 0; i < N; i++) {
        cin >> price[i];
    }

    vector<int> dp(N + 1, 0);

    for (int len = 1; len <= N; len++) {
        for (int cut = 0; cut < len; cut++) {
            dp[len] = max(dp[len], price[cut] + dp[len - cut - 1]);
        }
    }

    cout << dp[N];

    return 0;
}