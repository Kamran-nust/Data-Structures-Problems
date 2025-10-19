// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and without using the division operation.

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n=nums.size();
    vector<int>prod(n,1);
    for (int i=1; i<n; i++)
    {
        prod[i]=prod[i-1]*nums[i-1];
    }
    int suffix =1;
    for (int j=(n-2);j>=0;j--)
    {
        suffix*=nums[j+1];
        prod[j]=suffix*prod[j];
    }

    return prod;
    }
};
