#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        vector<int> duplicates;

        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;

            if (nums[index] < 0)
                duplicates.push_back(abs(nums[i]));
            else
                nums[index] = -nums[index];
        }

        return duplicates;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {4,3,2,7,8,2,3,1};

    vector<int> ans = obj.findDuplicates(nums);

    for (int x : ans)
        cout << x << " ";

    return 0;
}