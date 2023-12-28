class Solution {
public:
    int countPrimes(int n) {
        if(n<=2)
            return 0;
        vector<bool> p(n,false);
        int s=1;
        int u=sqrt(n);
        for(int i=3;i<n;i+=2){
            if(!p[i]){
                s++;
                if(i>u)
                    continue;
                for(int j=i*i;j<n;j+=i)
                    p[j]=true;
            }
        }
        return s;
    }
};