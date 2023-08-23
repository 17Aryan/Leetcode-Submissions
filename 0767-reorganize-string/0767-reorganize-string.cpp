class Solution {
public:
    
    char getmax(vector <int>& c){
        int max=0;
        char ch;
        for(int i=0;i<26;i++){
            if(c[i]>max){
                max=c[i];
                ch='a'+i;
            }
        }
        return ch;
    }
    
    string reorganizeString(string s) {
        int n=s.size();
        if(n==0)
            return "";
        vector<int> count(26,0);
        for(auto& ch:s)
            count[ch - 'a']++;
        char cc=getmax(count);
        int max=count[cc-'a'];
        
        if(max>(n+1)/2)
            return "";
        string res(n,' ');
        int ind=0;
        while(max){
            res[ind]=cc;
            ind=ind+2;
            max--;
        }
        count[cc-'a']=0;
        for(int i=0;i<26;i++){
            while(count[i]>0){
                ind=(ind>=n)?1:ind;
                res[ind]='a'+i;
                ind+=2;
                count[i]--;
            }
        }
        return res;
    }
};