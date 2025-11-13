// Given an integer array nums of unique elements, return all possible subsets (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

class Solution {
public:
    void allsubsets(vector<int>& nums, vector<vector<int>> &ans, vector<int>& answer,  int i)
    {
        if (i==nums.size())
        {
            ans.push_back(answer);
            return;
        }
        answer.push_back(nums[i]); // Including Step
        allsubsets(nums, ans, answer,i+1);
        answer.pop_back(); // Excluding Step
        allsubsets(nums, ans, answer,i+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>answer;
        allsubsets(nums, ans,answer, 0);
        return ans;
    }
};
