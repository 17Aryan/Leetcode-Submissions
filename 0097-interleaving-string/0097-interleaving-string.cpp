class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.length()+s2.length()!=s3.length())
            return false;
        
        vector<bool> d(s2.length()+1,false);
        
        for(int i=0;i<=s1.length();i++){
            for(int j=0;j<=s2.length();j++){
                if(i==0 && j==0)
                    d[j]=true;
                else if(i==0)
                    d[j]=d[j-1] && s2[j-1]==s3[i+j-1];
                else if(j==0)
                    d[j]=d[j] && s1[i-1]==s3[i+j-1];
                else
                    d[j]=(d[j] && s1[i-1]==s3[i+j-1])||(d[j-1] && s2[j-1]==s3[i+j-1]);
            }
        }
        return d[s2.length()];
    }
};