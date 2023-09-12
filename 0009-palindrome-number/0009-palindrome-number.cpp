class Solution {
public:
    bool isPalindrome(int x) {
        int m=x;
        long long t=0;
        while(x>0){
            int d=x%10;
            t=t*10+d;
            x=x/10;
        }
        if(t==m)
            return true;
        else
            return false;
    }
};