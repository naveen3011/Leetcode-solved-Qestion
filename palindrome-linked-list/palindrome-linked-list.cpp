/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        string str="";
        for(ListNode *p=head ;p!=NULL ; p=p->next){
            str+=to_string(p->val);
        }
        string f=str;
        reverse(f.begin(),f.end());
        if(str==f){
            return true;
        }
        else{
            return false;
        }
        
    }
};