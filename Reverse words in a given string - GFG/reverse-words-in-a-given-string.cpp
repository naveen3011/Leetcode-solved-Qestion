//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        int n=S.size();
        int i=0;
        string ans="";
        while(i<n){
            int j=i+1;
            while(j<n && S[j]!='.'){
                j++;
            }
            string word=S.substr(i,j-i);
            if(ans.empty()){
                ans=word;
            }
            else{
                ans=word+'.'+ans;
            }
            i=j+1;
        }
        return ans;
        
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends