class Solution {
public:
    int reverse(int x) {
        string s=to_string(x);
        int n=s.length();
        int i=0;
        int j=n-1;
        if(s[0]=='-'){
            i=1;
        }
        while(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
         long long int ans=stoll(s);
        if(ans>INT_MAX || ans<INT_MIN){
            return 0;
        }
        return ans;
        
    }
};