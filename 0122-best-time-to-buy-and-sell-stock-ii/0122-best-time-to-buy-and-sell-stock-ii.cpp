class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=0;
        if(prices.size()==1)
            return 0;
        for(int i=1;i<prices.size();i++){
            if(prices[i-1]<prices[i])
                p+=(prices[i]-prices[i-1]);
        }
    return p;
    }
};