class Solution {
public:
    string reverseWords(string s) {
        vector<string> c;
        for(int i=0;i<s.length();i++){
            string x="";
            if(s[i]!=' '){
                x+=s[i++];
                while((s[i]!=' ') && (i<s.length())){
                    x+=s[i];
                    i++;
                }
                c.push_back(x);
            }
        }
        string ans="";
        for(int i=c.size()-1;i>=0;i--){
            ans+=c[i];
            if(i!=0)
                ans+=" ";
        }
        return ans;
    }
};