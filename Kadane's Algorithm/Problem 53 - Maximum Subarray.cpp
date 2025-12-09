// Given an integer array nums, find the with the largest sum, and return its sum.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        //Kadane's Algorithm

        // Subarray is the continuous part of the array.
        //Total number of subarrays = (n*(n+1))/2

        //  SubarraySum    CurrentElement     action
        //  Positive       Positive           Extend
        //  Negative       Positive           New
        //  Positive       Negative           Extend
        //  Negative       Negative           New
        

        // if subarray sum becomes negative reset it to zero 
        // OR
        // This means start a new subarray if current element is big alone or extend the existing sub array

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
