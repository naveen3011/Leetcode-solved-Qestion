class Solution {
public:
    int singleNumber(vector<int>& nums) {
    // unordered_map<int,int> mp;
    //     int n=nums.size();
    //     for(int i=0 ;i<n ;i++ ){
    //         mp[nums[i]]++;
    //     }
    //     int ans=0;
    //     for(auto i : mp){
    //         if(i.second==1){
    //             ans=i.first;
    //         }
    //     }
    //     return ans;
        int ans=0;
        int n=nums.size();
        for(int i=0 ;i<nums.size()-1;i++){
            nums[i+1]=nums[i]^nums[i+1];
        }
        return nums[n-1];
    }
};