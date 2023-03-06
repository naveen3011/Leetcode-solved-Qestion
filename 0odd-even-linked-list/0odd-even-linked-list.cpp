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
    ListNode* oddEvenList(ListNode* head) {
      if(!head){
          return head;
      }
        ListNode *odd=head;
        ListNode *even=head->next;
        ListNode *odd_h=head;
        ListNode *even_h=head->next;
        while(even && even->next){
            //make two postion move
             odd->next=odd->next->next;
            even->next=even->next->next;
           
            //make pointer move
            odd=odd->next;
            even=even->next;
        }
        odd->next=even_h;
        return head;
        
    }
};