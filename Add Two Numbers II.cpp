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
        ListNode* head =NULL;
        stack<int> st1,st2;
        while(l1){
            st1.push(l1->val);
            l1 = l1->next;
        }
        while(l2){
            st2.push(l2->val);
            l2 = l2->next;
        }
        int carry = 0;
        while(st1.size() || st2.size() || carry){
            int sum = st1.size()?st1.top():0;
            sum+=st2.size()?st2.top() + carry:carry;
            if(st1.size()) st1.pop();
            if(st2.size()) st2.pop();
            carry = sum/10;
            sum = sum%10;
            ListNode* nxt = new ListNode(sum);
            if(head==NULL) head = nxt;
            else {
                nxt->next = head;
                head =nxt;
            }
        }
        return head;

    }
};
