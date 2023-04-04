class Solution {
public:
    
 static bool compare(pair<int,int> a, pair<int,int> b){
        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int> mp;
        for(int i=0 ; i<n ;i++){
            mp[nums[i]]++;
        }
        int res=0;
        vector<pair<int,int>> vc(mp.begin(),mp.end());
        sort(vc.begin(),vc.end(),compare);
        vector<int> ans;
        for(int i=0 ; i<k ; i++){
            ans.push_back(vc[i].first);
        }
        return ans;
        
    }
};