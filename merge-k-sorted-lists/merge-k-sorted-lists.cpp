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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       vector<int> v;
    for(auto i : lists){
        while(i){
            v.push_back(i->val);
            i = i->next;
        }
    }
    sort(v.begin(),v.end());
    ListNode* head = new ListNode(0);
    ListNode* temp = head;
    for(auto i : v){
        temp->next = new ListNode(i);
        temp = temp->next;
    }
    return head->next;
        
        
        
        
   
    }
};