class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n=nums.size();
        if(n<4)
            return ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            long long n1=(long long)target-(long long)nums[i];
            for(int j=i+1;j<n;j++){
                long long n2=n1-(long long)nums[j];
                int s=j+1,e=n-1;
                while(s<e){
                    long long c=nums[s]+nums[e];
                    if(c<n2)
                        s++;
                    else if(c>n2)
                        e--;
                    else{
                        vector<int> q(4,0);
                        q[0]=nums[i];
                        q[1]=nums[j];
                        q[2]=nums[s];
                        q[3]=nums[e];
                        ans.push_back(q);
                        while(s<e && nums[s]==q[2])
                            s++;
                        while(s<e && nums[e]==q[3])
                            e--;
                    }
                }
                while(j+1<n && nums[j+1]==nums[j])
                    j++;
            }
            while(i+1<n && nums[i+1]==nums[i])
                i++;
        }
        return ans;
    }
};