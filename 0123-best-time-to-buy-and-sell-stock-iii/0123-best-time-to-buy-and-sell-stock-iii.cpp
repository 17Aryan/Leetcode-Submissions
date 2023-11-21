class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int fb=INT_MAX,sb=INT_MAX,fp=0,sp=0;
        for(int x:prices){
            fb=min(fb,x);
            fp=max(fp,x-fb);
            sb=min(sb,x-fp);
            sp=max(sp,x-sb);
        }
        return sp;
    }
};