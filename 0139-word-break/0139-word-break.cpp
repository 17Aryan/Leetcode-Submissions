class Solution {
public:
    
    bool word(string s,vector<string>& w,unordered_map<string,bool>& m){
        if(m.find(s)!=m.end())
            return m[s];
        if(s.length()==0)
            return true;
        for(string v:w){
            size_t in=s.find(v);
            if(in!=string::npos && in==0){
                string su=s.substr(v.length());
                if(word(su,w,m)){
                    m[su]=true;
                    return true;
                }
            }
        }
        m[s]=false;
        return false;
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string,bool> m;
        return word(s,wordDict,m);
    }
};