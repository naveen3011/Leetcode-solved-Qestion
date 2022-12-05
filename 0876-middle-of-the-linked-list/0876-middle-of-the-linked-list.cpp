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
    ListNode* middleNode(ListNode* head) {
         ListNode* itr = head;
        int len=0;
        while(itr)
        {
            len++;
            itr = itr->next;
        }
        
        itr = head;
        for(int i=0;i<len/2;i++)
        {
            itr = itr->next;
        }
        return itr;
        
    }
};