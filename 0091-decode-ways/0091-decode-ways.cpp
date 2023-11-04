class Solution {
public:
    int numDecodings(string s) {
        int l=s.length();
        if(s[0]==0||l==0)
            return 0;
        vector<int> d(l+1,0);
        d[0]=1;
        d[1]=s[0]=='0'?0:1;
        for(int i=2;i<=l;i++){
            int f=stoi(s.substr(i-1,1));
            int sc=stoi(s.substr(i-2,2));
            if(f>=1 && f<=9)
                d[i]+=d[i-1];
            if(sc>=10 && sc<=26)
                d[i]+=d[i-2];
        }
        return d[l];
        
    }
};