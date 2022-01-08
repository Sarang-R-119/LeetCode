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
        ListNode* h1 = l1;
        ListNode* h2 = l2;
        
        ListNode* h3 = new ListNode(0);
        ListNode* result = h3;
        
        int carry = 0, sum = 0;
        
        while(!(h1 == nullptr && h2 == nullptr)){

            if(h1 != nullptr && h2 != nullptr){
                sum = (h1->val + h2->val + carry)%10;
                carry = (h1->val + h2->val + carry)/10;
                h1 = h1->next;
                h2 = h2->next;
            }
            else if(h1 != nullptr){
                sum = (h1->val + carry)%10;
                carry = (h1->val + carry)/10;
                h1 = h1->next;
            }
            else{
                sum = (h2->val + carry)%10;
                carry = (h2->val + carry)/10;
                h2 = h2->next;
            }
            
            h3->next = new ListNode(sum);
            h3 = h3->next;
        }
        
        if(carry != 0)
            h3->next = new ListNode(carry);
        
        return result->next;
    }
};