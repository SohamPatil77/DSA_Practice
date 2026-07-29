/*
    Problem: Buying GPU
    Platform: CodeChef

    Approach:
    - Chef starts with 0 coins.
    - Every month:
        1. GPU price increases by Y.
        2. Chef earns Z coins.
    - Chef buys the GPU as soon as his coins are
      greater than or equal to the current GPU price.
    - If Z <= Y, Chef can never catch up, so print -1.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        // Chef can never catch up
        if (Z <= Y) {
            cout << -1 << endl;
            continue;
        }

        int price = X;
        int coins = 0;
        int months = 0;

        // Simulate each month
        while (coins < price) {
            months++;
            price += Y;   // GPU price increases
            coins += Z;   // Chef earns coins
        }

        cout << months << endl;
    }

    return 0;
}