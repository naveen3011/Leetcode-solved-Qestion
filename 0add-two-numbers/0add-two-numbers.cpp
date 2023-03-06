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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
  
           vector<int> v1;
        vector<int> v2;
        while(l1!=NULL){
            v1.push_back(l1->val);
            l1=l1->next;
        }
        while(l2!=NULL){
            v2.push_back(l2->val);
            l2=l2->next;
        }
        int carry=0;
        ListNode* head=NULL;
        ListNode* temp=NULL;
        for(int i=0;i<max(v1.size(),v2.size());i++){
            int sum=0;
            if(i<v1.size()){
                sum+=v1[i];
            }
            if(i<v2.size()){
                sum+=v2[i];
            }
            sum+=carry;
            carry=sum/10;
            sum=sum%10;
            ListNode* node=new ListNode(sum);
            if(head==NULL){
                head=node;
                temp=head;
            }
            else{
                temp->next=node;
                temp=temp->next;
            }
        }
        if(carry!=0){
            ListNode* node=new ListNode(carry);
            temp->next=node;
        }
        return head;

        
    }
};