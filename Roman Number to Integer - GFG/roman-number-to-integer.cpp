//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        map<char,int> m;
        m.insert({'I',1});

        m.insert({'V',5});

        m.insert({'X',10});

        m.insert({'L',50});

        m.insert({'C',100});

        m.insert({'D',500});

        m.insert({'M',1000});
             
             
        int n=str.size();
        int ans;
        for(int i=0 ; i<n ; i++){
            if(m[str[i]]<m[str[i+1]]){
                ans+=m[str[i+1]]-m[str[i]];
                i++;
                continue;
            }
            ans+=m[str[i]];
        }
        return ans;
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends