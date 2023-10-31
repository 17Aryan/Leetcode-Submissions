class Solution {
public:
    
    void ds(vector<int> &nums,int j,vector<int> &cur,set<vector<int>> &res1){
        vector<int> temp=cur;
        sort(temp.begin(),temp.end());
        res1.insert(temp);
        for(int i=j;i<nums.size();i++){
            cur.push_back(nums[i]);
            ds(nums,i+1,cur,res1);
            cur.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        set<vector<int>> res1;
        vector<int> cur;
        ds(nums,0,cur,res1);
        for(auto i:res1)
            res.push_back(i);
        return res;
    }
};