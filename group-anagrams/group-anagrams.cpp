class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> vc;
        unordered_map<string,vector<string>> mp;
        for(auto i : strs){
            string s=i;
            sort(s.begin(),s.end());
            mp[s].push_back(i);
        }
        for(auto it : mp){
            vc.push_back(it.second);
        }
        return vc;
        
        
    }
};