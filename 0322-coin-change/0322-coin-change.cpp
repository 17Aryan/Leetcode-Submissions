class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> d(amount+1,1e8);
        d[0]=0;
        for(int i=1;i<=amount;i++)
            for(int n:coins)
                if(i-n>=0)
                    d[i]=min(d[i],d[i-n]+1);
        return(d[amount]==1e8)?-1:d[amount];
    }
};