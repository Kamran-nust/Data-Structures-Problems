// The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.

// Given an integer n, return all distinct solutions to the n-queens puzzle. 
// You may return the answer in any order.

// Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space, respectively.

class Solution {
public:
    int count=0;
    bool isSafe (vector<string>&board, int row, int col, int n)
    {
        for(int j=0; j<n; j++)
        {
            if (board[j][col]=='Q')
            {
                return false;
            }
        }
        for(int i= row-1,j=col-1; i>=0 && j>=0; i--, j--)
        {
            if (board[i][j]=='Q')
            {
                return false;
            }
        }
        for(int i= row-1,j=col+1; i>=0 && j<n; i--, j++)
        {
            if (board[i][j]=='Q')
            {
                return false;
            }
        }
        return true;
    }
    void chess(vector<string>&board, vector<vector<string>>&answer, int row, int n)
    {
        if(n==row)
        {
            answer.push_back({board});
            count++;
            return;
        }
        for(int j=0; j<n; j++)
        {
            if(isSafe(board, row, j, n))
            {
                board[row][j]='Q';
                chess(board, answer, row+1 , n);
                board[row][j]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board (n, string(n,'.'));
        vector<vector<string>>answer;
        chess(board, answer, 0, n);
        cout<<count;
        return answer;
    }
};
