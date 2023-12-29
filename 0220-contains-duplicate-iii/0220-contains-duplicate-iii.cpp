class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int id, int vd) {
        vector<pair<int,int>> arr(nums.size());
        for(int i=0;i<nums.size();i++){
            arr[i].first=nums[i];
            arr[i].second=i;
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(arr[i].first+vd>=arr[j].first){
                    if(abs(arr[i].second-arr[j].second)<=id)
                        return true;
                }
                else
                    break;
            }
        }
        return false;
    }
};