class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> ans;
        if(m==0)
            return ans;
        vector<vector<bool>> seen(m,vector<bool>(n,false));
        
        int dr[]={0,1,0,-1};
        int dc[]={1,0,-1,0};
        
        int x=0,y=0,di=0;
        for(int i=0;i<m*n;i++){
            ans.push_back(matrix[x][y]);
            seen[x][y]=true;
            int nex=x+dr[di];
            int ney=y+dc[di];
            
            if(0<=nex && nex<m && 0<=ney && ney<n && !seen[nex][ney]){
                x=nex;
                y=ney;
            }
            else{
                di=(di+1)%4;
                x+=dr[di];
                y+=dc[di];
            }
        }
        return ans; 
    }
};