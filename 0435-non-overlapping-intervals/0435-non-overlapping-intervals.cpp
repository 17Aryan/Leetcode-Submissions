class Solution {
public:
     static bool feul(vector<int> &a,vector<int> &b){
         if(a[1]==b[1])
             return a[0]<b[0];
         return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),feul);
        int p=0,c=1;
        for(int i=1;i<n;i++){
            if(intervals[i][0]>=intervals[p][1]){
                p=i;
                c++;
            }
        }
        return n-c;
    }
};