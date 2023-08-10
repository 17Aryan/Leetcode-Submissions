class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        reverse(matrix.begin(),matrix.end());
        int i,j;
        int size=matrix.size();
        for(i=0;i<size;i++){
            for(j=0;j<=i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
};