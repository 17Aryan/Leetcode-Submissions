class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX;
        int l=0,s=0;
        for(int i=0;i<n;i++){
            s+=nums[i];
            while(s>=target){
                ans=min(ans,i+1-l);
                s-=nums[l++];
            }
        }
        return (ans!=INT_MAX)?ans:0;
        
    }
};