class Solution {
public:
    
    void helper(int n,int k,vector<int>&ans,vector<vector<int>>&res,int num){
        if(ans.size()==k){
            res.push_back(ans);
            return;
        }
        for(int i=num;i<=n;i++){
            ans.push_back(i);
            helper(n,k,ans,res,i+1);
            ans.pop_back();
        }
        
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> ans;
        helper(n,k,ans,res,1);
        return res;
    }
};