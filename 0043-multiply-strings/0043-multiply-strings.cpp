class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0"||num2=="0"){
            return "0";
        }
        
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        
        int n=num1.size()+num2.size();
        
        string ans(n,'0');
        
        for(int i=0;i<num2.size();i++){
            int d1=num2[i]-'0';
            for(int j=0;j<num1.size();j++){
                int d2=num1[j]-'0';
                
                int nn=i+j;
                int c=ans[nn]-'0';
                int mul=d2*d1+c;
                ans[nn]=(mul%10)+'0';
                ans[nn+1]+=(mul/10);
            }
        }
        if(ans.back()=='0')
            ans.pop_back();
        reverse(ans.begin(),ans.end());
        return ans;
    }
};