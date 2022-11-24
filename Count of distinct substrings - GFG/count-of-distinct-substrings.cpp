//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

int countDistinctSubstring(string s);

int main()
{
 int t,l,i,j;
 int temp;
    cin>>t;
 while(t--){
 string s;
  cin>>s;
  cout<<countDistinctSubstring(s)<<endl;

 }
}


// } Driver Code Ends


/*You are required to complete this method */
struct Node{
   unordered_map<char,Node*>mp;
};

int countDistinctSubstring(string s)
{
   int c=0;
   Node*root=new Node();
   for(int i=0;i<s.length();i++)
   {
       Node*curr=root;
       for(int j=i;j<s.length();j++)
       {
           if(curr->mp.find(s[j])==curr->mp.end()){
           curr->mp[s[j]]=new Node();
           c++;
           }
           curr=curr->mp[s[j]];
       }
   }
   return c+1;
}