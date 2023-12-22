class Solution {
public:
    int solve(vector<int> nums,int in,vector<int>& d){
        if(in>=nums.size())
            return 0;
        if(d[in]!=-1)
            return d[in];
        int l=solve(nums,in+2,d)+nums[in];
        int r=solve(nums,in+1,d);
        d[in]=max(l,r);
        return d[in];
    }
    
    int rob(vector<int>& nums) {
        vector<int> d(nums.size()+1,-1);
        return solve(nums,0,d);
    }
};