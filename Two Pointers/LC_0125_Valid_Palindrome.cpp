/*
Problem Statement:
Given a string s, return true if it is a palindrome after
converting all uppercase letters to lowercase and removing
all non-alphanumeric characters.

Brute Force Approach:
Create a new cleaned string by removing special characters
and converting to lowercase. Reverse it and compare.

Time Complexity: O(n)
Space Complexity: O(n)

Optimal Approach:
Use two pointers. Move the left pointer from the beginning
and the right pointer from the end. Skip non-alphanumeric
characters and compare lowercase letters.

Time Complexity: O(n)
Space Complexity: O(1)
*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string s)
{
    int left = 0;
    int right = s.length() - 1;

    while (left < right)
    {
        while (left < right && !isalnum(s[left]))          // isalnum - It checks whether a character is:uppercase ,lowercase,digit ,if yes i returns true
        {                                                 // isalnum() and tolower() are built-in library functions.
            left++;
        }

        while (left < right && !isalnum(s[right]))
        {
            right--;
        }

        if (tolower(s[left]) != tolower(s[right]))
        {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main()
{
    string s = "A man, a plan, a canal: Panama";

    if (isPalindrome(s))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    return 0;
}