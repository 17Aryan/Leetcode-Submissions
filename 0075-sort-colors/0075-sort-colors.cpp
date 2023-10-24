class Solution {
public:
//     int s=0;
    
//     int qqsort(vector<int>& v,int s,int e){
//         int p=e;
//         int j=s;
//         for(int i=s;i<e;i++){
//             if(v[i]<v[p]){
//                 swap(v[i],v[j]);
//                 j++;
//             }
//         }
//         swap(v[j],v[p]);
//         return j;
//     }
//     void qsort(vector<int>& nums,int s,int e){
//         int p=qqsort(nums,s,e);
//         qsort(nums,s,p-1);
//         qsort(nums,p+1,e);
//     }
    void sortColors(vector<int>& nums) {
        // int s=0,e=nums.size()-1;
        // qsort(nums,s,e);
        
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(nums[j]>nums[j+1])
                    swap(nums[j],nums[j+1]);
            }
        }
    }
};