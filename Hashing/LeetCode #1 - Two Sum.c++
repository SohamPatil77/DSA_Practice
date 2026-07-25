/*
Problem Statement:
Given an array of integers nums and an integer target, return the indices
of the two numbers such that they add up to the target.

Brute Force Approach:
Use two nested loops. Pick one element and compare it with every remaining
element. If their sum equals the target, return both indices.

Time Complexity: O(n²)
Space Complexity: O(1)

Optimal Approach:
Traverse the array once using a hash map. For every element, calculate
the required complement (target - current element). If the complement
already exists in the hash map, return the stored index and current index.
Otherwise, store the current element and its index.

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];

        if (mp.find(complement) != mp.end())
        {
            return {mp[complement], i};
        }

        mp[nums[i]] = i;
    }

    return {};
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = twoSum(nums, target);

    cout << "Indices: ";

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}