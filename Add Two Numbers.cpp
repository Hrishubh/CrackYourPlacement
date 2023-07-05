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
        ListNode* head=NULL;
        ListNode* curr=NULL;
        int carry=0;
        while(l1 || l2 ||carry){
            int sum=l1?l1->val:0;
            sum+=l2?l2->val+carry:carry;
            carry=sum/10;
            sum%=10;
            ListNode* temp=new ListNode(sum);
            if(!head)
                head=temp;
            if(curr)
                curr->next=temp;
            curr=temp;
            l1=l1?l1->next:NULL;
            l2=l2?l2->next:NULL;
        }
        
        return head;
            
    }
};
