//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string str) {
    // Write your code here.
    int n=str.size();
    int cnt=0;
    char prev = 'z';
    for(int i=0;i<n;i++){
        if(str[i]!= prev){
            cnt++;
            prev=str[i];
        }
    }
    return (cnt/2)+1;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends