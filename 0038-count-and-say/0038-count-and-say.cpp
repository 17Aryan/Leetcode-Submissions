string m[50]={""};
class Solution {
public:
    string countAndSay(int n) {
        m[1]="1";
        string next,prev;
        int i,j,l;
        for(i=2;i<n+1;i++){
            if(m[i]!="")
                continue;
            next="";
            prev=m[i-1];
            l=prev.size();
            int c=1;

            for(j=1;j<l;j++){
                if(prev[j-1]==prev[j])
                    c++;
                else{
                    next=next+to_string(c)+prev[j-1];
                    c=1;
                }
            }
            next=next+to_string(c)+prev[j-1];
            m[i]=next;
        }
        return m[n];
    }
};