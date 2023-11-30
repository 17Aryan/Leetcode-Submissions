class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long> st;
        unordered_set<string> o={"+","-","*","/"};
        long o1,o2;
        for(auto str:tokens){
            if(o.find(str)==o.end())
                st.push(stoi(str));
            else{
                o2=st.top(),st.pop();
                o1=st.top(),st.pop();
                if(str=="+")
                    o2=o1+o2;
                else if(str=="-")
                    o2=o1-o2;
                else if(str=="*")
                    o2=o1*o2;
                else if(str=="/")
                    o2=o1/o2;
                st.push(o2);
            }
        }
        return st.top();
    }
};