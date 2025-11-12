// Write a program to solve a Sudoku puzzle by filling the empty cells.
// A sudoku solution must satisfy all of the following rules:
   // Each of the digits 1-9 must occur exactly once in each row.
   // Each of the digits 1-9 must occur exactly once in each column.
   // Each of the digits 1-9 must occur exactly once in each of the 9 3x3 sub-boxes of the grid.

// The '.' character indicates empty cells.

class Solution {
public:
    bool isvalid(vector<vector<char>>& board, int row, int col, int digit)
    {
        for (int i=0; i<9; i++)
        {
            if(board[i][col]==digit)
            {
                return false;
            }
        }
        for (int i=0; i<9; i++)
        {
            if(board[row][i]==digit)
            {
                return false;
            }
        }

    int sr= (row/3)*3;
    int sc= (col/3)*3;
    for ( int j=sr; j<=sr+2;j++)
    {
        for (int k=sc; k<=sc+2;k++)
        {
        if(board[j][k]==digit)
            {
                return false;
            }
        }
    }
        return true;
    }
    bool solver(vector<vector<char>>& board, int row, int col)
    {
        if (row==9)
        {
            return true;
        }
        int nextr= row;
        int nextc= col+1;
        if(nextc==9)
        {
            nextr=row+1;
            nextc=0;
        }
        if (board[row][col]!='.')
        {
            return solver(board, nextr, nextc); // number already exists and go to next row and next column
        }
        for (char dig= '1'; dig<='9'; dig++)
        {
            if (isvalid(board, row,col, dig))
            {
                board[row][col]=dig;
                if(solver(board, nextr, nextc))
                {
                    return true;
                }
                board[row][col]='.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solver(board,0,0);
    }
};
