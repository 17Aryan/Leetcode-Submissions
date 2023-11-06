class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> d(m);
        d[0]=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(j-1>=0)
                    d[j]+=d[j-1];
            }
        }
        return d.back();
    }
};