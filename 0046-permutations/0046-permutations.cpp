class Solution {
public:
    
    // void swap(int& x,int& y){
    //     int t=x;
    //     x=y;
    //     y=t;
    // }
    
    void permuti(vector<vector<int>> &r,vector<int> &nums,int l,int h){
        if(l>=h){
            r.push_back(nums);
            return;
        }
        for(int i=l;i<=h;i++){
            swap(nums[i],nums[l]);
            
            permuti(r,nums,l+1,h);
            swap(nums[i],nums[l]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        int s=nums.size()-1;
        vector<vector<int>> r;
        
        permuti(r,nums,0,s);
        return r;
      
    }
};