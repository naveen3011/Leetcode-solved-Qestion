class Solution {
public:
   int minElements(vector<int>& nums, int limit, int goal) {
    return (abs(accumulate(begin(nums), end(nums), 0l) - goal) + limit - 1) / limit;
}
};