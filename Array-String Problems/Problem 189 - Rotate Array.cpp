// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k % nums.size();
        int start,end,temp;
        start= 0;
        end=nums.size()-1;

        while(start<=end)
        {
            temp= nums[start];
            nums[start++]=nums[end];
            nums[end--]=temp;
        }
        start=0;
        end=k-1;
        while(start<=end)
        {
            temp= nums[start];
            nums[start++]=nums[end];
            nums[end--]=temp;
        }
        start=k;
        end=nums.size()-1;
        while(start<=end)
        {
            temp= nums[start];
            nums[start++]=nums[end];
            nums[end--]=temp;
        }
    }
};
