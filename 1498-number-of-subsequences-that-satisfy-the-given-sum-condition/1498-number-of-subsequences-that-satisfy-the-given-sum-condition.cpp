class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
         int res=0; int mod=1e9+7;
    vector<int> pows(nums.size(),1);
    //precompute powers of 2
     for(int i=1;i<nums.size();i++) pows[i]=(pows[i-1]*2)%mod;
    sort(nums.begin(),nums.end());
    int l=0,r=nums.size()-1;
    while(l<=r){
        if(nums[l]+nums[r]>target) r--;
        else res=(res+pows[r-l++])%mod;
    }
    return res;
    }
};