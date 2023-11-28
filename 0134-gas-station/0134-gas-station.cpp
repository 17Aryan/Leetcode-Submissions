class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int t=0,mid=0,l=0;
        for(int i=0;i<n;i++){
            t+=gas[i]-cost[i];
            mid+=gas[i]-cost[i];
            if(mid<0){
                mid=0;
                l=i+1;
            }
        }
        if(t<0)
            return -1;
        else
            return l;
    }
};