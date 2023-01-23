//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string removePair(string s) {
        // code here
          stack<char> st,s1;

        for (auto i: s){

            if(s1.empty()){

                s1.push(i);

            }

            else if(s1.top()==i){

                s1.pop();

            }else{

                s1.push(i);

            }

        }

        

        while(!s1.empty()){

            st.push(s1.top());

            s1.pop();

        }

        

        string a;

        if(st.empty()){

            return "-1";

        }

        while(!st.empty()){

            a+=st.top();

            st.pop();

        }

        

        return a;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        
        Solution obj;
        string res = obj.removePair(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends