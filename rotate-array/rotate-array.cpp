class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> v;
        int n=nums.size();
        for(int i=0 ;i<n ;i++){
            v.push_back(nums[i]);
        }
        for(int i=0 ;i<n ;i++){
            nums[(i+k)%n]=v[i];
        }
        
    }
};