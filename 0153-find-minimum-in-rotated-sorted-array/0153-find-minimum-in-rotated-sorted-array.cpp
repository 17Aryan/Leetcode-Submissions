class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=n-1;
        
        while(l<=r){
            if(nums[l]<=nums[r])
                return nums[l];
            int m=l+(r-l)/2;
            if(nums[l]>nums[m])
                r=m;
            else if(nums[m]>nums[r])
                l=m+1;
        }
        if(nums[l]<=nums[r])
            return nums[l];
        return -1;
    }
};