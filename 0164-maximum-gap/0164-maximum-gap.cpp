class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2)
            return 0;
        sort(nums.begin(),nums.end());
        int r=INT_MIN;
        for(int i=1;i<nums.size();i++){
            r=max(r,nums[i]-nums[i-1]);
        }
        return r;
    }
};