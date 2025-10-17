// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        for (int i=0; i<nums.size();i++)
        {
            if (i>0 && nums[i]==nums[i-1])
            {
                continue;
            }
            int firstptr=i+1;
            int secondptr=nums.size()-1;
            while(firstptr<secondptr)
            {
                if(firstptr>i+1 && nums[firstptr]==nums[firstptr-1])
                {
                    firstptr++;
                    continue;
                }
                if(nums[firstptr]+nums[secondptr]+nums[i]==0)
                {
                    ans.push_back({nums[i],nums[firstptr],nums[secondptr]});
                    firstptr++;
                    secondptr--;
                }
                else if(nums[firstptr]+nums[secondptr]+nums[i]>0)
                {
                    secondptr--;
                }
                else
                {
                    firstptr++;
                }      
            }
        }
        return ans;
    }
};
