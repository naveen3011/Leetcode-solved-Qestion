/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        set<ListNode*> h;
        while(head!=NULL){
            if(h.find(head)!=h.end()) return true;
            h.insert(head);
            head=head->next;
        }
        return false;
    }
};