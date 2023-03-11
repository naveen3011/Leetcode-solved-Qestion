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
    ListNode* sortList(ListNode* head) {
        vector<int> v;
        for(ListNode *n=head ; n!=NULL ; n=n->next){
            v.push_back(n->val);
        }
        
        sort(v.begin(),v.end());
        ListNode *temp=head;
        int i=0;
        while(temp!=NULL){
            temp->val=v[i];
            temp=temp->next;
            i++;
        }
        return head;
        
    }
};