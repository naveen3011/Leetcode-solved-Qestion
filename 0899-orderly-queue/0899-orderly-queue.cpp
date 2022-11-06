class Solution {
public:
    string orderlyQueue(string s, int k) {
        if (k == 1) {
        string ans=s;
        //   string ans=s;
            s+=s;
            for(int i=0 ; i<ans.size(); i++){
                ans=min(ans,s.substr(i,size(ans)));
            }
            return ans;
        }
       
        else{
             sort(s.begin(),s.end());
            return s;
        }
    }
};