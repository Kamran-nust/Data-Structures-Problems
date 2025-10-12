class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate,votes=0;

        for (int i=0; i<nums.size(); i++)
        {
            if (votes==0)
            {
                candidate=nums[i];
            }
            if (nums[i]==candidate)
            {
                votes++;
            }
            else
            {
                votes--;
            }
        }
        
      return candidate;  
    }
};
