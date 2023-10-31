class Solution {
public:
    
    void subs(int i,vector<vector<int>> &ans,vector<int> &nums,vector<int> &d){
        if(i==nums.size())
            ans.push_back(d);
        else{
            d.push_back(nums[i]);
            subs(i+1,ans,nums,d);
            d.pop_back();
            subs(i+1,ans,nums,d);
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> i;
        subs(0,ans,nums,i);
        return ans;
    }
};