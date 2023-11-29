class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> c(32,0);
        long long a=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<32;j++){
                if(nums[i] & (1<<j))
                    c[j]+=1;
            }
        }
        for(int i=0;i<32;i++)
            a+=c[i]%3 * pow(2,i);
        return a;
    }
};