// Given an integer array nums that may contain duplicates, return all possible subsets (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

class Solution {
public:

    void uniquesubsets(vector<int>& nums , vector<vector<int>>&answer, vector<int> &ans, int i)
    {
        if (i==nums.size())
        {
            answer.push_back(ans);
            return;
        }  
        ans.push_back(nums[i]);
        uniquesubsets(nums ,answer,ans, i+1);
        while(i<nums.size()-1 && nums[i]==nums[i+1])
        {
            i++;
        }
        ans.pop_back();
        uniquesubsets(nums ,answer,ans, i+1);  
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>answer;
        vector<int> ans;
        uniquesubsets(nums, answer, ans, 0);
        return answer;
    }
};
