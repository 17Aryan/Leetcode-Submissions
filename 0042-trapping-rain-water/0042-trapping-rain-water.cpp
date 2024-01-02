class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int t=0;
        if(n==0||n==1||n==2)
            return 0;
        vector<int> l(n,0),r(n,0);
        l[0]=height[0];
        r[n-1]=height[n-1];
        for(int i=1;i<n;i++){
            l[i]=max(l[i-1],height[i]);
            r[n-1-i]=max(r[n-i],height[n-i-1]);
        }
        for(int i=0;i<n;i++)
            t+=min(l[i],r[i])-height[i];
        return t;
    }
};