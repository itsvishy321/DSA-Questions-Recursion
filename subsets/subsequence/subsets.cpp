/*
Given an integer array nums of unique elements, return all possible
subsets
(the power set).

The solution set must not contain duplicate subsets.Return the solution in any order.



Example 1:

Input: nums = [1, 2, 3]
Output : [[], [1], [2], [1, 2], [3], [1, 3], [2, 3], [1, 2, 3]]
*/


#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    void solve(vector<int> nums, vector<vector<int>>& PowerSet, int i, vector<int> output)
    {
        // Base Case
        if (i == nums.size())
        {
            PowerSet.push_back(output);
            return;
        }

        // Call for exclude
        solve(nums, PowerSet, i + 1, output);

        // Call for include
        output.push_back(nums[i]);
        solve(nums, PowerSet, i + 1, output);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> PowerSet;
        vector<int> output;
        solve(nums, PowerSet, 0, output);

        return PowerSet;
    }
};

int main()
{
    Solution object;
    vector<int> nums = { 1,2,3 };
    vector<vector<int>> ans = object.subsets(nums);
    for (auto x : ans) {
        for (auto y : x)
            cout << y << " ";

        cout << endl;
    }

    return 0;
}