class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n,vector<int>(n));
        int n1=1;
        for(int i=0;i<(n+1)/2;i++){
            for(int j=i;j<n-i;j++)
                res[i][j]=n1++;
            for(int j=i+1;j<n-i;j++)
                res[j][n-i-1]=n1++;
            for(int j=n-i-2;j>=i;j--)
                res[n-i-1][j]=n1++;
            for(int j=n-i-2;j>i;j--)
                res[j][i]=n1++;
                
        }
        return res;
    }
};