class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,unordered_map<char,int>> bm;
        for(auto i=0;i<9;i++){
            for(auto j=0;j<9;j++){
                char c=board[i][j];
                if(c!='.'){
                    if(bm[i][c]++>0)
                        return false;
                    if(bm[j+9][c]++>0)
                        return false;
                    if(bm[27+(i/3)*3+j/3][c]++>0)
                        return false;
                }
            }
        }
        return true;
    }
};