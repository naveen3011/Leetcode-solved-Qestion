class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // int n=nums.size();
        // vector<int> ans(n,1);
        // int left=1,right=1;
        // for(int i=0;i<n;i++){
        //     ans[i]*=left;
        //     left*=nums[i];
        //     ans[n-i-1]*=right;
        //     right*=nums[n-i-1];
        // }
        // return ans;
        int n=nums.size();
        vector<int> pro(n,1);
        vector<int> left(n,1);
        vector<int> rig(n,1);
        for(int i=1 ; i<n ;i++){
            left[i]=nums[i-1]*left[i-1];
        }
        for(int j=n-2 ; j>=0 ;j--){
            rig[j]=rig[j+1]*nums[j+1];
        }
        for(int i=0; i<n ;i++){
            pro[i]=left[i]*rig[i];
        }
        return pro;
    }
};