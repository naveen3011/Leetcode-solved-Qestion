//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int count(int coins[], int N, int sum) {

        // code here.
        std::vector<long long int> dp(sum + 1, 0);
    
    // There is one way to make sum = 0, i.e., by not selecting any coin
    dp[0] = 1;

    // Iterate through each coin denomination
    for (int i = 0; i < N; i++) {
        for (int j = coins[i]; j <= sum; j++) {
            // Add the count of ways to make sum 'j' using coin coins[i]
            dp[j] += dp[j - coins[i]];
        }
    }

    // The count of ways to make the given sum is stored in dp[sum]
    return dp[sum];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends