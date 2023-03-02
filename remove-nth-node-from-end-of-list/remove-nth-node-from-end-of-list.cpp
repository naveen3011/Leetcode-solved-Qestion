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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
             ListNode* temp = head;
            int len = 0;
            while (temp != NULL) {
                len++;
                temp = temp->next;
            } 

        ListNode *prev=NULL;
        ListNode *curr=head;
        int nb=len-n+1;
        for(int i=1 ;i<nb ;i++){
            prev=curr;
            curr=curr->next;
        }
        if(prev==NULL){
            head=head->next;
            return head;
        }
        else{
            prev->next=prev->next->next;
            return head;
        }
        
        
        
    }
};