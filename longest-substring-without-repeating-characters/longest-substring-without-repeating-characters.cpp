class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int i=0,j=0;
        set<int> st;
        int ans=0;
        while(i<n && j<n){
            if(st.find(s[j])==st.end()){
                st.insert(s[j]);
                j++;
                ans=max(ans,j-i);
            }
            else{
                st.erase(s[i++]);
            }
        }
        return ans;
    }
};