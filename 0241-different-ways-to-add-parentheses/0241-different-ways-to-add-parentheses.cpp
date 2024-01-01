class Solution {
public:
    vector<int> diffWaysToCompute(string s) {
        vector<int> ans;
        bool flag=true;
        for(int i=0;i<s.length();i++){
            if(s[i]<'0' || s[i]>'9'){
                flag=false;
                vector<int> l=diffWaysToCompute(s.substr(0,i)),r=diffWaysToCompute(s.substr(i+1,s.length()-i-1));
              for(auto k:l)  
                for(auto j:r)
                    if(s[i]=='+')
                        ans.push_back(k+j);
                    else if(s[i]=='-')
                        ans.push_back(k-j);
                    else if(s[i]=='*')
                        ans.push_back(k*j);
            }
        }
            if(flag)
                ans.push_back(atoi(s.c_str()));
            return ans;
        
    }
};