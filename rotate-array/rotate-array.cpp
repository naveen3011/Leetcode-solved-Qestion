class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
//         vector<int> v;
//         int n=nums.size();
//         for(int i=0 ;i<n ;i++){
//             v.push_back(nums[i]);
//         }
//         for(int i=0 ;i<n ;i++){
//             nums[(i+k)%n]=v[i];
//         }
         int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        
    }
};