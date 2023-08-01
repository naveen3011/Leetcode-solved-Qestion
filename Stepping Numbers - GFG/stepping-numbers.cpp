//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
bool isStepNum(int n)
{
    // Initialize prevDigit with -1
    int prevDigit = -1;
 
    // Iterate through all digits of n and compare difference
    // between value of previous and current digits
    while (n)
    {
        // Get Current digit
        int curDigit = n % 10;
 
        // Single digit is consider as a
        // Stepping Number
        if (prevDigit == -1)
            prevDigit = curDigit;
        else
        {
            // Check if absolute difference between
            // prev digit and current digit is 1
            if (abs(prevDigit - curDigit) != 1)
                 return false;
        }
        prevDigit = curDigit;
        n /= 10;
    }
 
    return true;
}

    int steppingNumbers(int n, int m)
    {
        // Code 
   
   if (n > m) return 0;

    int cnt = 0;
    queue<int> q;
    for (int i = 0; i <= 9; i++) {
        q.push(i);
    }

    while (!q.empty()) {
        int num = q.front();
        q.pop();

        if (num >= n && num <= m) {
            cnt++;
        }

        if (num == 0 || num > m) continue;

        int lastDigit = num % 10;
        int nextNum1 = num * 10 + (lastDigit - 1);
        int nextNum2 = num * 10 + (lastDigit + 1);

        if (lastDigit > 0 && nextNum1 <= m) {
            q.push(nextNum1);
        }

        if (lastDigit < 9 && nextNum2 <= m) {
            q.push(nextNum2);
        }
    }

    return cnt;



    }
    
};


//{ Driver Code Starts.

int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        Solution obj;
        int n, m;
        cin>>n>>m;
        cout << obj.steppingNumbers(n,m) << endl;
    }
	return 0;
}


// } Driver Code Ends