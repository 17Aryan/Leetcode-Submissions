class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n=intervals.size();
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        vector<int> temp=intervals[0];
        vector<vector<int>> ans;
        for(auto i:intervals){
            if(temp[1]>=i[0]){
                temp[1]=max(temp[1],i[1]);
            }
            else{
                ans.push_back(temp);
                temp=i;
            }
        }
        ans.push_back(temp);
        return ans;
    }
};