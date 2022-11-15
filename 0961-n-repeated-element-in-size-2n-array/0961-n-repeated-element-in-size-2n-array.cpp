class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
       unordered_map<int,int>mp;
        for(int i=0;i<nums.size()/2+2;i++)
        {
            mp[nums[i]]++;
            //mp[nums[i]]++;
            if(mp[nums[i]]>1)
            {
                return nums[i];
            }
        }
        return -1;
        
    }
};