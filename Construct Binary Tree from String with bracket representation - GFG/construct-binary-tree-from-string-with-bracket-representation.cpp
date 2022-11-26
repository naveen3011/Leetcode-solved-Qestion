//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left
child and a pointer to right child */
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};

/* This function is to print the inorder of the tree  */
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}



// } Driver Code Ends
//User function Template for C++

/*
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};
*/


class Solution{
    int start=0;
    Node *strhelp(string s){
        if(start>s.size()){
            return NULL;
        }
        bool flag=false;
        if(s[start]=='-'){
            flag=true;
            start++;
        }
        int num=0;
        while(start<s.size()&& s[start]>='0'&& s[start]<='9'){
            int dig=int(s[start]-'0');
            num= num *10 +dig;
            start++;
        }
        if(flag){
            num=-num;
            
        }
        Node *root=new Node(num);
        if(start>s.size()){
            return root;
        }
        if(start<s.size() && s[start]=='('){
            start++;
            root->left=strhelp(s);
        }
        if(start<s.size() && s[start]=='('){
            start++;
            root->right=strhelp(s);
        }
        if(start<s.size() && s[start]==')'){
            start++;
            return root;
        }
        return root;
        
        
        
    }
public:
    // function to construct tree from string
    Node *treeFromString(string str){
        if(str.length()==0){

             return NULL;

        }

        return strhelp(str);
        
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        Solution obj;
        Node *root = obj.treeFromString(str);
        inorder(root);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends