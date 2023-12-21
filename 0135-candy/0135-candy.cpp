class Solution {
public:
    int candy(vector<int>& rat) {
        vector<int> v(rat.size(),1);
        for(int i=1;i<rat.size();i++){
            if(rat[i]>rat[i-1])
                v[i]=v[i-1]+1;
        }
        for(int i=rat.size()-2;i>=0;i--){
            if(rat[i]>rat[i+1])
                v[i]=max(v[i],v[i+1]+1);
        }
        int s=0;
        for(auto& x:v)
            s+=x;
        return s;
    }
};