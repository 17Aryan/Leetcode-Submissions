class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> c;
        c.push(-1);
        int ans=0,n=s.length();
        for(int i=0;i<n;i++){
            if(c.top()!=-1 && s[c.top()]=='(' && s[i]==')')
                c.pop(),ans=max(ans,i-c.top());
            else
                c.push(i);
        }
        return ans;
    }
};