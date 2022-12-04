class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
    long sum = 0;
        for(auto it: nums){
            sum += it;
        }
        long n = nums.size();
        long count = 0;
        long x = 0;
        long avg = 0;
        
        
        int finalAvg = INT_MAX;
        int finalIndex = 0;
        for(int i=0;i<nums.size();i++){
            count += nums[i];
            x++;
            n--;
            if(x!= nums.size())
                avg = abs(count / x - (sum - count)/n);
            else
                avg = abs(count / x);
            if(avg < finalAvg){
                finalIndex = i;
                finalAvg = avg;
            }
        }
        return finalIndex;
    }
};