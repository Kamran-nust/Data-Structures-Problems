// Given an array nums of distinct integers, return all the possible . You can return the answer in any order.

class Solution {
public:
void perm(vector<int>& nums, vector<vector<int>>& answer, int idx)
{
    if(idx==nums.size())
    {
        answer.push_back({nums});
        return;
    }

    for(int j=idx; j<nums.size(); j++)
    {
        swap(nums[idx], nums[j]);
        perm(nums,answer, idx+1);
        swap(nums[idx], nums[j]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>answer;
        perm(nums, answer, 0);
        return answer;
    }
};
