//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  static bool compare(pair<int,int> p1, pair<int,int> p2){
      if(p1.second ==p2.second){
          return p1.first>p2.first;
      }
      return p1.second>p2.second;
  }
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        int n=nums.size();
        map<int,int> mp;
        for(int i=0 ; i<n;i++){
            mp[nums[i]]++;
        } 
        vector<pair<int,int>>frq_arr(mp.begin(),mp.end());
        vector<int> f;
        sort(frq_arr.begin(),frq_arr.end(),compare);
        for(int i=0 ; i<k ; i++){
            f.push_back(frq_arr[i].first);
        }
        return f;
     
        
        
    }
    
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends