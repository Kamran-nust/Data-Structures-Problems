// You are given a 0-indexed 2D integer matrix grid of size n * n with values in the range [1, n2]. 
// Each integer appears exactly once except a which appears twice and b which is missing. 
// The task is to find the repeating and missing numbers a and b.

// Return a 0-indexed integer array ans of size 2 where ans[0] equals to a and ans[1] equals to b.

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        unordered_set<int>s;
        int n=grid.size();
        int expected_sum= ((n*n)*((n*n)+1))/2;
        int start, repeating,actual_sum,missing;
        repeating =0;
        actual_sum=0;

        for (int i=0; i<n; i++)
        {
            for(int j=0; j<n;j++)
            {
            start=grid[i][j];
            actual_sum+=start;
            if (s.find(start)!=s.end())
            {
                repeating=start;
            }
            s.insert(start);
            
            }
        }

        missing= expected_sum+repeating - actual_sum;

        return {repeating,missing};
    }
    
};
