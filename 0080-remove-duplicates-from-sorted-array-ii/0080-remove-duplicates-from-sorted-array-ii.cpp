class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        bool ar=false;
        int index=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]>nums[i]){
                ar=false;
                nums[index++]=nums[i+1];
            }
            else if(nums[i+1]==nums[i] && ar==false){
                ar=true;
                nums[index++]=nums[i+1];
            }
        }
        return index;
    }
};