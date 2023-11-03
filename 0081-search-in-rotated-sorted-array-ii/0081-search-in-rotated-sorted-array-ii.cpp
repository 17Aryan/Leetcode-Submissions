class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0,r=nums.size();
        // if(r==0)
        //     return false;
        // while(l<=r){
        //     int m=l+(r-1)/2;
        //     if(nums[m]==target)
        //         return true;
        //     if(nums[m]<target)
        //         l=m+1;
        //     else
        //         r=m-1;
        // }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target)
                return true;
        }
        return false;
    }
};