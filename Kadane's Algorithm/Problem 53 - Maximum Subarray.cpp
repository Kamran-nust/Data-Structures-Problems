// Given an integer array nums, find the with the largest sum, and return its sum.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int maxSum=nums[0];
        int n=nums.size();
        int currSum=nums[0];

       for (int i=1; i<n;i++)
        {
            currSum=max(currSum+nums[i],nums[i]);   
            maxSum= max(currSum,maxSum);
        }
     return maxSum;   
    }
};
