class Solution {
private:
    int s(int n){
        return to_string(n).length();
    }
public:
    vector<string> splitMessage(string message, int limit) {
        int l=message.length();
        int b=1;
        int al=s(1);
        while(b*limit<b*(s(b)+3)+al+l){
            if(s(b)*2+3>=limit)
                return {};
            al+=s(++b);
        }
        vector<string> ans;
        for(int i=0,a=1;a<=b;++a){
            int j=limit-(s(a)+s(b)+3);
            ans.push_back(message.substr(i,j)+"<"+to_string(a)+"/"+to_string(b)+">");
            i+=j;
        }
        return ans;
    }
};