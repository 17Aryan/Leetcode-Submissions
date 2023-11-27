class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        sort(nums.begin(),nums.end());
        int l=0,cl=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1])
                continue;
            else if(nums[i]==nums[i-1]+1)
                cl++;
            else{
              l=max(l,cl);
                cl=1;
            } 
        }
        return max(l,cl);
    }
};