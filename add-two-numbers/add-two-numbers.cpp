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
        ListNode* head1 = l1;
        ListNode* head2 = l2;
        
        int first = head1->val;
        int second = head2->val;
        
        int sum = (first + second)%10;
        int carry = (first + second)/10;
        
        ListNode* head3 = new ListNode(sum);
        ListNode* finalResultHead = (head3);
        
        head1 = head1->next;
        head2 = head2->next;
        
        while(!(head1 == nullptr && head2 == nullptr)){
            
            first = (head1 == nullptr)? 0: head1->val;
            second = (head2 == nullptr)? 0: head2->val;
            
            sum = ((first + second) + carry)%10;
    
            ListNode* next = new ListNode(sum);
            carry = (((first + second) + carry)/10);
            
            head1 = (head1 == nullptr)? nullptr:head1->next;
            head2 = (head2 == nullptr)? nullptr:head2->next;
            head3->next = (next);
            head3 = head3->next;
        }
        
        if(carry != 0){
            ListNode* next = new ListNode(carry);
            head3->next = (next);
        }
        
        return finalResultHead;
        
    }
};