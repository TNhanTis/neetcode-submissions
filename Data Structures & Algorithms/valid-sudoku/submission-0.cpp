class Solution {
public:
    bool isValidCell(int x,int y,vector<vector<char>>& board){
        for(int  i=0;i<9;i++){
            if(i==x) continue;
            if(board[x][y]==board[i][y]) return false;
        }
        for(int  i=0;i<9;i++){
            if(i==y) continue;
            if(board[x][y]==board[x][i]) return false;
        }
        int boxCol=x/3;
        int boxRow=y/3;
        for(int i=boxCol*3;i<boxCol*3+3;i++){
            for(int j=boxRow*3;j<boxRow*3+3;j++){
                if(i==x && j==y) continue;
                if(board[i][j]==board[x][y]) return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                if(!isValidCell(i,j,board)) return false;
            }
        }
        return true;
    }
};
