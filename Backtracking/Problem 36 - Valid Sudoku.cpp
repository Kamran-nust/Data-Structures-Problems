// Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:
    // Each row must contain the digits 1-9 without repetition.
    // Each column must contain the digits 1-9 without repetition.
    // Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.

// Note:
    // A Sudoku board (partially filled) could be valid but is not necessarily solvable.
    // Only the filled cells need to be validated according to the mentioned rules.

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i=0; i<board.size(); i++)
        {
            unordered_map<int,int>row;
            unordered_map<int,int>column;
            unordered_map<int,int> square;
            for (int j=0; j<board[0].size();j++)
            {
                if (row.find(board[i][j])==row.end() || board[i][j]=='.')
                {
                    row[board[i][j]]=i;
                }
                else
                {
                    cout<<"row "<<board[i][j]<<" "<<i<<" "<<j;
                    return false;
                }
                if (column.find(board[j][i])==column.end() || board[j][i]=='.')
                {
                    column[board[j][i]]=j;
                }
                else
                {
                    cout<<"Column "<<board[j][i]<<" "<<j<<" "<<i;
                    return false;
                }
            }
        }

        for (int i=0; i<board.size(); i++)
        {
            unordered_map<int,int> square;
            for ( int j=0; j<3;j++)
            {
                for (int k=0; k<3;k++)
                {
                    int row= (i/3)*3+j;
                    int col= (i%3)*3+k;
                    if (square.find(board[row][col])==square.end() || board[row][col]=='.')
                    {
                        cout<<"Not False"<<i<<" "<<j<<" "<<k<<endl;
                        square[board[row][col]]=i;
                    }
                    else
                    {
                        cout<<i<<" "<<j<<" "<<k;
                        return false;
                    }

                }
            }
        }
        return true;
    }
};
