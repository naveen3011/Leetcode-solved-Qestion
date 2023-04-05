//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSpecialNumbers(int N, vector<int> arr) {
        // Code here
            sort(arr.begin(), arr.end());
        int cnt = 0;
        
        for(int i=0; i<N; i++){
            if(arr[i] == arr[i+1]){
                cnt++;
            }else{
                for(int j=0; j<i; j++){
                    if(arr[i]%arr[j] == 0){
                        cnt++;
                        break;
                    }
                }
            }
        }
        return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.countSpecialNumbers(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends