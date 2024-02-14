class Solution {
public:
    string getHint(string secret, string guess) {
        int n=secret.size();
        int c1=0,c2=0;
        string ans="";
        for(int i=0;i<n;i++){
            if(secret[i]==guess[i]){
                c1++;
                guess[i]=-1;
                secret[i]=-1;
            }
        }
        for(int i=0;i<n;i++){
            if(secret.find(guess[i])!=-1 && guess[i]!=-1){
                c2++;
                secret[secret.find(guess[i])]=-1;
            }
        }
        ans=to_string(c1)+"A"+to_string(c2)+"B";
        return ans;
    }
};