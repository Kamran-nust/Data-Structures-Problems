// You are given an m x n integer matrix matrix with the following two properties:
    // Each row is sorted in non-decreasing order.
    // The first integer of each row is greater than the last integer of the previous row.

// Given an integer target, return true if target is in matrix or false otherwise.
// You must write a solution in O(log(m * n)) time complexity.

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int rowsize=matrix.size();
        int columnsize=matrix[0].size();
        int start=0;
        int row=-1;
        int end= rowsize-1;

        while (start<=end)
        {
            int mid= start +((end-start)/2);
            if(matrix[mid][0]<=target && matrix[mid][columnsize-1]>=target)
            {
                row=mid;
                break;
            }
            else if (matrix[mid][columnsize-1]<=target)
            {
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        cout<<row;
        if(row!=-1)
        {
            start=0;
            end=columnsize-1;
            while(start<=end)
            {
                int mid= start+((end-start)/2);
                if(matrix[row][mid]== target)
                {
                    cout<<matrix[row][mid];
                    return true;
                }
                else if(target>matrix[row][mid])
                {
                    start=mid+1;
                }
                else
                {
                    end=end-1;
                }

            }
        }
                    return false;
            }
        
};

