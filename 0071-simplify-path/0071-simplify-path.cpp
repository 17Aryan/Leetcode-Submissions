class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string a="";
        for(int i=0;i<path.size();i++){
            if(path[i]=='/')
                continue;
            string temp;
            while(i<path.size() && path[i]!='/'){
                temp+=path[i];
                i++;
            }
            if(temp==".")
                continue;
            else if(temp==".."){
                if(!st.empty())
                    st.pop();
            }
            else
                st.push(temp);
        }
        while(!st.empty()){
            a='/'+st.top()+a;
            st.pop();
        }
        if(a.size()==0)
            return "/";
        return a;
    }
};