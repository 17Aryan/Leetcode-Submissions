class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int r, int c, int r0, int c0) {
        vector<vector<int>> ans;
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                ans.push_back({i,j,abs(i-r0)+abs(j-c0)});
        sort(ans.begin(),ans.end(),[](vector<int>& c1,vector<int>& c2){
                    return c1[2]<c2[2];
                });
        for(vector<int>& d:ans)    
            d.pop_back();
        return ans;
    }
};