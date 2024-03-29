class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n=s.length();
        unordered_map<string,int> m;
        vector<string> res;
        for(int i=0;i<n-9;i++){
            m[s.substr(i,10)]++;
        }
        for(auto itr=m.begin();itr!=m.end();itr++){
            if(itr->second>1)
                res.push_back(itr->first);
        }
        return res;
    }
};