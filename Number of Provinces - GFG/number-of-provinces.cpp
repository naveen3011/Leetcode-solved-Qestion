//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    void BFS(vector<vector<int>>& adj, int s, bool vis[]) {
        queue<int> q;
        vis[s] = true;
        q.push(s);
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            for (int v = 0; v < adj[u].size(); v++) {
                if (adj[u][v] && !vis[v]) {
                    vis[v] = true;
                    q.push(v);
                }
            }
        }
    }

    int numProvinces(vector<vector<int>>& adj,int V) {
        //int V = adj.size();
        bool vis[V];
        int cnt = 0;
        for (int i = 0; i < V; i++) {
            vis[i] = false;
        }
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                cnt++;
                BFS(adj, i, vis);
                
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
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends