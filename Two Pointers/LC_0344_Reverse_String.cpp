/*
Problem Statement:
Given a character array s, reverse the array in-place.

Brute Force Approach:
Create another array, copy elements in reverse order,
and copy them back to the original array.

Time Complexity: O(n)
Space Complexity: O(n)

Optimal Approach:
Use two pointers.
Swap the first and last characters, then move both pointers
towards the center until they meet.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverseString(vector<char> &s)
{
    int left = 0;
    int right = s.size() - 1;

    while (left < right)
    {
        swap(s[left], s[right]);

        left++;
        right--;
    }
}

int main()
{
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    reverseString(s);

    cout << "Reversed String: ";

    for (char ch : s)
    {
        cout << ch << " ";
    }

    return 0;
}