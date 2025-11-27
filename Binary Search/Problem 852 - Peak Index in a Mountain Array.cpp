// You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

// Return the index of the peak element.

// Your task is to solve it in O(log(n)) time complexity.

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int start=1;
        int end=nums.size()-2;
        
        while(start<=end)
        {
            int mid=start + ((end-start)/2);
            cout<<mid;
            if(nums[mid]>nums[mid-1] && nums[mid]> nums[mid+1])
            {
                return mid;
            }
            else if (nums[mid]>nums[mid-1])
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }

        }

        return -1;
        
    }
};
