#include <iostream>
#include <vector>
using namespace std;

// Finds the leftmost (first) or rightmost (last) index of target using binary search.
int findBound(vector<int>& nums, int target, bool findFirst)
{
    int start = 0;
    int end = nums.size() - 1;
    int result = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target)
        {
            result = mid;

            if (findFirst)
            {
                end = mid - 1;   // keep searching on the left half
            }
            else
            {
                start = mid + 1; // keep searching on the right half
            }
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return result;
}

vector<int> searchRange(vector<int>& nums, int target)
{
    int first = findBound(nums, target, true);
    int last = findBound(nums, target, false);

    return {first, last};
}

int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    vector<int> ans = searchRange(nums, target);

    cout << "First: " << ans[0] << ", Last: " << ans[1] << endl;

    return 0;
}
