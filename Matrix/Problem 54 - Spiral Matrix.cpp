// Given an m x n matrix, return all elements of the matrix in spiral order.

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> spiral;

        int sr =0;
        int er = matrix.size()-1;
        int sc=0;
        int ec = matrix[0].size()-1;
        while(sr<=er && sc<=ec)
        {
            for (int i=sc;i<=ec;i++)
            {
                cout<<matrix[sr][i];
                spiral.push_back(matrix[sr][i]);
            }
            
            for(int i=sr+1;i<=er;i++)
            {
                cout<<matrix[i][ec];
                spiral.push_back(matrix[i][ec]);
            }
            
            for(int i=ec-1;i>=sc;i--)
            {
                if(sr==er)
                {
                    break;
                }
                cout<<matrix[er][i];
                spiral.push_back(matrix[er][i]);
            }
            for(int i=er-1;i>sr;i--)
            {
                if(sc==ec)
                {
                    break;
                }
                cout<<matrix[i][sc];
                spiral.push_back(matrix[i][sc]);
            }
            sc++;
            er--;
            sr++;
            ec--;

        }
        
return spiral;
    }
};
