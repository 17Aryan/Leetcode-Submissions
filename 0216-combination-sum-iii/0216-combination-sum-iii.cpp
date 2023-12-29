class Solution {
public:
    vector<vector<int>> res;
    vector<int> v={1,2,3,4,5,6,7,8,9};
    void recc(int k,int n,vector<int> temp,int s,int i,int j){
        if(s==n && i==k){
            res.push_back(temp);
            return;
        }
        else if(i>k || s>n || j>=v.size())
            return;
        else{
            temp.push_back(v[j]);
            recc(k,n,temp,s+v[j],i+1,j+1);
            temp.pop_back();
            recc(k,n,temp,s,i,j+1);
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        recc(k,n,temp,0,0,0);
        return res;
    }
};