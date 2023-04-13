class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for (int x : nums) {
            s.insert(x);
        }
        int ans = 0;
        for (int x : nums) {
            if (s.find(x) == s.end()) {
                continue;
            }
              int len = 1;
              int y = x + 1;
              while (s.find(y) != s.end()) {
                  s.erase(y);
                  y++;
                  len++;
              }
              y = x - 1;
              while (s.find(y) != s.end()) {
                  s.erase(y);
                  y--;
                  len++;
              }
              ans = max(ans, len);
          }
          return ans;
    }
};