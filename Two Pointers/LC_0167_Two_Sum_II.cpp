/*
    Problem: LeetCode 167 - Two Sum II (Input Array Is Sorted)
    Platform: LeetCode

    Approach:
    - The array is already sorted.
    - Use two pointers:
        1. Left pointer starts from the beginning.
        2. Right pointer starts from the end.
    - Calculate the sum of both elements.
    - If sum == target, return their 1-based indices.
    - If sum < target, move the left pointer to increase the sum.
    - If sum > target, move the right pointer to decrease the sum.
    - Continue until the required pair is found.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/
#include <iostream>
#include <vector>
using namespace std;

// Function to find two indices whose values sum up to the target
vector<int> twoSum(vector<int>& numbers, int target) {

    // Initialize two pointers
    int left = 0;
    int right = numbers.size() - 1;

    // Traverse until both pointers meet
    while (left < right) {

        // Calculate current sum
        int sum = numbers[left] + numbers[right];

        // If target is found, return 1-based indices
        if (sum == target) {
            return {left + 1, right + 1};
        }

        // Move left pointer to increase the sum
        else if (sum < target) {
            left++;
        }

        // Move right pointer to decrease the sum
        else {
            right--;
        }
    }

    // Return empty vector if no solution exists
    return {};
}

int main() {

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> numbers(n);

    cout << "Enter sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    // Store the result
    vector<int> ans = twoSum(numbers, target);

    cout << "Indices: ";
    for (int index : ans) {
        cout << index << " ";
    }

    return 0;
}