// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

//You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int start,end;

        for (int i=0; i<nums.size();i++)
        {
            start=nums[i];
            end= target-start;

            if(m.find(end)!=m.end())
            {
                return {i,m[end]};
            }
            m[start]=i;

        }
        return{};
    }
};
