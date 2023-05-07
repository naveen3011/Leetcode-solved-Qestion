//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int find(int a[],int x);
void unionSet(int a[],int x ,int z);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++)
			a[i]=i;
		int k;
		cin>>k;
		for(int i=0;i<k;i++){
			string s;
			cin>>s;
			if(s=="UNION"){
				int z,x;
				cin>>x>>z;
				unionSet(a,x,z);
			}
			else{
				int x;
				cin>>x;
				int parent=find(a,x);
				cout<<parent<<" ";
			}
		}
		cout<<endl;
	}
}
// } Driver Code Ends


/*Complete the functions below*/
// int pre[N],rank[N];

// void initi(){
//     for(int i=0 ; i<N ;i++){
//         par[i]=i;
//         rank[i]=0;
//     }
// }
int find(int A[],int X)
{
    if(A[X]==X){
        return X;
    }
    else{
        return A[X]=find(A,A[X]);
    }
       //add code here
}
void unionSet(int A[],int X,int Z)
{
	//add code here
	int x_rep=find(A,X);
	int y_rep=find(A,Z);
	if(x_rep== y_rep) return;
	A[x_rep]=y_rep;
	
}