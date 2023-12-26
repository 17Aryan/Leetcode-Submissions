class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        // int n=num.size();
        vector<int> ans;
        int i=0,j=num.size()-1;
        while(i<j){
            int s=num[i]+num[j];
            if(s==target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }
            else if(s<target)
                i++;
            else
                j--;
        }
        return ans;
    }
};