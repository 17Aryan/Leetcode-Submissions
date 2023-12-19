class Solution {
public:
    string fractionToDecimal(int nu, int de) {
        bool neg=(nu<0)^(de<0)?true:false;
        long long int n=nu;
        long long int d=de;
        n=abs(n);
        d=abs(d);
        long long int temp=n/d;
        string res="";
        if(neg && n!=0)
            res+="-";
        res+=to_string(temp);
        n%=d;
        if(n==0)
            return res;
        res+=".";
        bool rep=false;
        unordered_map<long long int,int> mp;
        while(n!=0 && !rep){
            if(mp.find(n)==mp.end())
                mp[n]=res.size();
            else if(mp.find(n)!=mp.end()){
                rep=true;
                res.push_back(')');
                res.insert(mp[n],"(");
                break;
            }
            n*=10;
            res+=to_string(n/d);
            n%=d;
        }
        return res;
    }
};