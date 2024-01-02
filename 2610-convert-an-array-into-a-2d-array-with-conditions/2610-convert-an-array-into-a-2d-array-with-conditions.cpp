class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int> f(nums.size()+1);
        vector<vector<int>> ans;
        for(int i:nums){
            if(f[i]>=ans.size())
                ans.push_back({});
            ans[f[i]].push_back(i);
            f[i]++;
        }
        return ans;
    }
};