class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix[0][0]==target)
            return true;
        int i=0;
        int j=matrix[0].size()-1;
        while(j>=0 && i<matrix.size()){
            if(matrix[i][j]==target)
                return true;
            else if(matrix[i][j]<target)
                i++;
            else
                j--;
        }
        return false;
    }
};