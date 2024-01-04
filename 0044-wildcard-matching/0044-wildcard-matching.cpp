class Solution {
public:
    // int solve(int i,int j,string s1,string s2,vector<vector<int>> dp){
    //     if(i<0 || j<0){
    //         while(j>=0 && s2[j]=='*')
    //             j--;
    //         if(i<0 && j<0)
    //             return true;
    //         else
    //             return false;
    //     }
    //     if(dp[i][j]!=-1)
    //         return dp[i][j];
    //     if(s1[i]==s2[j] || s2[j]=='?')
    //         return dp[i][j]=solve(i-1,j-1,s1,s2,dp);
    //     else if(s2[j]=='*'){
    //         for(int k=0;k<=i+1;k++)
    //             if(solve(i-k,j-1,s1,s2,dp))
    //                 return dp[i][j]=true;
    //     }
    //     return dp[i][j]=false;
    // }
    bool isMatch(string s, string p) {
        int m=p.size(),n=s.size();
        vector<vector<bool>> dp(n+1,vector(m+1,false));
        dp[0][0]=true;
        for(int j=0;j<m && p[j]=='*';j++)
            dp[0][j+1]=true;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(p[j-1]=='*')
                    dp[i][j]=dp[i-1][j] || dp[i][j-1];
                else
                    dp[i][j]=(s[i-1]==p[j-1] || p[j-1]=='?') && dp[i-1][j-1];
            }
        }
        return dp[n][m];
    }
};