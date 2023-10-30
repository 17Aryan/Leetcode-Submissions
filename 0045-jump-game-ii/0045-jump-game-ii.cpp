class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int a=1;
        int s=nums[0];
        if(n<=1)
            return 0;
        if(s==0)
            return -1;
        int maxi=nums[0];
        for(int i=1;i<n;i++){
            if(i==n-1)
                return a;
            maxi=max(maxi,i+nums[i]);
            s--;
            if(s==0){
                a++;
                if(i>=maxi)
                    return -1;
                s=maxi-i;
            }
        }
        return -1;
    }
};