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
    ListNode* reverseList(ListNode* head) {
        ListNode* T = head;
        
        if(T == nullptr)
            return T;
        
        ListNode* H = T->next;
        ListNode* M = T;
        
        while(H != nullptr){
            M = H;
            H = H->next;
            M->next = T;
            T = M;
        }
        
        head->next = nullptr;
        
        return T;
    }
};