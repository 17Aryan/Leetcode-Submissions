class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n=s.size();
        int l[26]={0};
        for(int i=0;i<n;i++)
            l[s[i]-'a']=i;
        int seen[26]={0};
        string ans="";
        for(int i=0;i<n;i++){
            while(ans.size() and ans.back()>s[i] and l[ans.back()-'a']>i and seen[s[i]-'a']==0){
                seen[ans.back()-'a']=0;
                ans.pop_back();
            }
            if(seen[s[i]-'a']==0)
                ans.push_back(s[i]),seen[s[i]-'a']=1;
        }
        return ans;
    }
};