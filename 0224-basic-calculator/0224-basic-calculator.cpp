class Solution {
public:
    int calculate(string s) {
        int  n=s.size();
        int num=0;
        int res=0;
        int sign=1;
        stack<int> st;
        
        for(int i=0 ;  i<n ; i++){
            char c=s[i];
            if(c>='0'&& c<='9'){
                num=num*10 + (c-'0');
            }
            if(c=='-'){
                res+=sign*num;
                num=0;
                sign=-1;
            }
            if(c=='+'){
                res+=sign*num;
                num=0;
                sign=1;
            }
            if(c=='('){
                st.push(res);
                st.push(sign);
                res=0;
                sign=1;
            }
            if(c==')'){
                res+=sign*num;
                num=0;
                 res *= st.top(); 
                st.pop();
                res += st.top(); 
                st.pop();
            }
        }
         res += (sign) * num;
        
        return res;
    }
};