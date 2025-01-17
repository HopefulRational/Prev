/*
Two Sum
Solved

Given an array of integers nums and an integer target, return the indices i and j such that nums[i] + nums[j] == target and i != j.

You may assume that every input has exactly one pair of indices i and j that satisfy the condition.

Return the answer with the smaller index first.

Example 1:

Input: 
nums = [3,4,5,6], target = 7

Output: [0,1]

Explanation: nums[0] + nums[1] == 7, so we return [0, 1].
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for(int i=0; i<nums.size(); ++i)
        {
            if(m.find(target - nums[i]) != m.end())
            {
                return {m[target - nums[i]], i};
            }
            // m.insert({nums[i], i});
            m[nums[i]] = i;
        }
        return {0, 0};
    }
};
