/*
========================================
Problem: Unlock the Next Level
Platform: CodeChef
Topic: Basics - Conditional Statements
Difficulty: Beginner

Approach:
- If current XP is greater than or equal to required XP,
  print "UNLOCKED".
- Otherwise, print the additional XP needed.

Time Complexity: O(1)
Space Complexity: O(1)
========================================
*/

#include <iostream>
using namespace std;

int main() {
    int requiredXP, currentXP;
    cin >> requiredXP >> currentXP;

    if (currentXP >= requiredXP) {
        cout << "UNLOCKED";
    } else {
        cout << requiredXP - currentXP;
    }

    return 0;
}



// also right 

// int main() {
//     int X, Y;
//     cin >> X >> Y;

//     if (Y >= X) {
//         cout << "UNLOCKED";
//     } else {
//         cout << X - Y;
//     }

//     return 0;
// }