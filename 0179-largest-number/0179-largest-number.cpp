class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string s;
        sort(nums.begin(),nums.end(),[](const auto& a,const auto& b){
            string n1=to_string(a);
            string n2=to_string(b);
            return n1+n2>n2+n1;
        });
        for(auto i:nums)
            s+=to_string(i);
        if(s[0]=='0')
            return "0";
        return s;
    }
};