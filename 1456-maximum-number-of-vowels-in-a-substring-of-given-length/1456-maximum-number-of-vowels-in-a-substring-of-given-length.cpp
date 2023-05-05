class Solution {
public:
    int maxVowels(string s, int k) {
        set<char> st={'a','e','i','o','u'};
        int max_cnt=0;
        int cnt=0;
        for(int i=0 ; i<s.size(); i++){
            if(i>=k && st.count(s[i-k])) cnt--;
            if(st.count(s[i])){
                cnt++;
            }
             max_cnt=max(max_cnt,cnt);

        }
       
        return max_cnt;
        
    }
};