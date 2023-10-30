class Solution {
public:
    vector<string> ans;
    void back(string &s,string temp, int a,int d){
        if(d>4)
            return;
        if(d==4 && a>=s.length()){
            temp.pop_back();
            ans.push_back(temp);
            return;
        }
        for(int i=1;i<=3 && a+i<=s.length();i++){
            string num=s.substr(a,i);
            if(num[0]=='0' && i!=1)
                break;
            else if(stol(num)<=255)
                back(s,temp+s.substr(a,i)+".",a+i,d+1);
        }
    }
    vector<string> restoreIpAddresses(string s) {
        back(s,"",0,0);
        return ans;
    }
};