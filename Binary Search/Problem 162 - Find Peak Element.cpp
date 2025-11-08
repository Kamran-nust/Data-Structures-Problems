// A peak element is an element that is strictly greater than its neighbors.

// Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

// You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

// You must write an algorithm that runs in O(log n) time.

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       int i=1;
       if(nums.size()==1)
        {
            return 0;
        }
        if(nums.size()==2)
        {
            if(nums[i-1]>nums[i])
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }  
        while(i<nums.size()-1)
        {
            if(nums[0]>nums[1])
            {
                return 0;
            }
            if(nums[i]>nums[i-1] && nums[i]> nums[i+1])
            {
                return i;
            }
            
            i++;
        }
        if (nums[nums.size()-1]>nums[nums.size()-2])
            {
                return nums.size()-1;
            }
        
        return -1;
    }
};
