class Solution {
public:
    bool isPalindrome(string s) {
        string s1="",ch="",temp="";
        for(char c: s)
            s1+=tolower(c);
        int n=s1.size();
        for(int i=0;i<n;i++){
            if((s1[i]>=97 && s1[i]<=122)||(s1[i]>=48 && s1[i]<=57))
                ch+=s1[i];
        }
        temp=ch;
        reverse(ch.begin(),ch.end());
        if(ch==temp)
            return true;
        return false;
    }
};