class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> merge;
        for(auto i:intervals){
            if(merge.empty() || merge.back()[1]<i[0])
                merge.push_back(i);
            else
                merge.back()[1]=max(merge.back()[1],i[1]);
        }
        return merge;
    }
};