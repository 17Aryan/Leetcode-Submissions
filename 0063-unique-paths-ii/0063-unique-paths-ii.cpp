class Solution {
public:
    int func(int i,int j,vector<vector<int>> &d,vector<vector<int>> &obs){
        if(i==0 && j==0)
            return 1;
        if(i<0||j<0||obs[i][j]==1)
            return 0;
        if(d[i][j]!=-1)
            return d[i][j];
        int u=func(i-1,j,d,obs);
        int l=func(i,j-1,d,obs);
        return d[i][j]=u+l;
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obs) {
        int n=obs.size();
        int m=obs[0].size();
        if(obs[0][0]==1||obs[n-1][m-1]==1)
            return 0;
        vector<vector<int>> d(n,vector<int>(m,-1));
        return func(n-1,m-1,d,obs);
    }
};