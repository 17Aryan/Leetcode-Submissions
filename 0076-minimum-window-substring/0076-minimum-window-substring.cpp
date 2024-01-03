class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> mp(128,0);
        for(char c:t)
            mp[c]++;
        int c=t.size(),begin=0,end=0,d=INT_MAX,head=0;
        while(end<s.size()){
            if(mp[s[end++]]-->0)
                c--;
            while(c==0){
                if(end-begin<d){
                    head=begin;
                    d=end-head;
                }
                if(mp[s[begin++]]++==0)
                    c++;
            }
        }
        return d==INT_MAX?"":s.substr(head,d);
    }
};