// Given a circular integer array nums of length n, return the maximum possible sum of a non-empty subarray of nums.

// A circular array means the end of the array connects to the beginning of the array.
// Formally, the next element of nums[i] is nums[(i + 1) % n] and the previous element of nums[i] is nums[(i - 1 + n) % n].

// A subarray may only include each element of the fixed buffer nums at most once.
// Formally, for a subarray nums[i], nums[i + 1], ..., nums[j], there does not exist i <= k1, k2 <= j with k1 % n == k2 % n.

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n= nums.size();
        int maxSum = INT_MIN;
        int minSum= INT_MAX;
        int currMin=0;
        int currSum= 0;
        int total=0;

        for (int i=0; i<n;i++)
        {
            currSum=max(currSum +nums[i], nums[i]);
            maxSum=max(currSum, maxSum);
            currMin= min(currMin+ nums[i], nums[i]);
            minSum=min(currMin, minSum);
            total+=nums[i];
    
        }
        if(maxSum<0)
        {
        return maxSum;
        }
        return max(maxSum, total-minSum);
    }
};
