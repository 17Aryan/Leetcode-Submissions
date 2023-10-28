class Solution {
public:
    int minDistance(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        
        vector<vector<int>> d(n+1,vector<int>(m+1,-1));
        
        for(int i=0;i<=n;i++)
            d[i][0]=i;
        for(int j=0;j<=m;j++)
            d[0][j]=j;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(word1[i-1]==word2[j-1])
                    d[i][j]=0+d[i-1][j-1];
                else
                    d[i][j]=1+min(d[i-1][j],min(d[i][j-1],d[i-1][j-1]));
            }
        }
        return d[n][m];
    }
};