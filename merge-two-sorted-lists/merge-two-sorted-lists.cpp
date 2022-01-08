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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // ListNode* h1 = list1;
        // ListNode* h2 = list2;
        
        ListNode* head = new ListNode();// head node
        ListNode* h3 = head; // tail node
        
        while(!(list1 == nullptr && list2 == nullptr)){
            if(list1 != nullptr && list2 != nullptr){
                if(list1->val < list2->val){
                    cout << " list1= " << list1->val;
                    h3->next = list1;
                    list1 = list1->next;
                    h3 = h3->next;
                 
                }
                else{
                    cout << " list2= " << list2->val;
                    h3->next = list2;
                    list2 = list2->next;
                    h3 = h3->next;
                }

                    
            }
            else if(list1 != nullptr){
                    h3->next = list1;
                    list1 = list1->next;
                    h3 = h3->next;
            }
            else{
                    h3->next = list2;
                    list2 = list2->next;
                    h3 = h3->next;
            }
            // cout << h3->val;
        }
        
        return head->next;
    }
};