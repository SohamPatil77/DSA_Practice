/*
Problem Statement:
Given two strings s and t, return true if t is an anagram of s,
otherwise return false.

Brute Force Approach:
Sort both strings and compare them.
If both sorted strings are equal, return true.

Time Complexity: O(n log n)
Space Complexity: O(1) or O(n) (depends on sorting implementation)

Optimal Approach:
Use an unordered_map to count the frequency of each character
in both strings. If the frequency maps are equal, the strings
are anagrams.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
        {
            return false;
        }

        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;

        for (char ch : s)
        {
            mp1[ch]++;
        }

        for (char ch : t)
        {
            mp2[ch]++;
        }

        return mp1 == mp2;
    }
};

int main()
{
    Solution obj;

    string s = "anagram";
    string t = "nagaram";

    if (obj.isAnagram(s, t))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    return 0;
}