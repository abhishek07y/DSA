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
    ListNode* reverse(ListNode* head){
        ListNode* previous = NULL;
        ListNode* temp=head;
         while(temp!=nullptr){
            ListNode* forward=temp->next;
            //t;
            temp->next = previous;   // ⭐ actual reverse
            previous = temp;
            temp = forward;
            
        }
         ListNode* new_head=previous;
        return new_head;

    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        if (head == nullptr || head->next == nullptr) {
            return true;
        }
        while (fast != nullptr && fast->next != nullptr &&
       fast->next->next != nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* new_h = reverse(slow->next);
        ListNode* first=head;
        ListNode* second=new_h;
        while(second!=nullptr){
            if(first->val!=second->val){
                return false;
                // first=first->next;
                // second =second->next;

            }
            first=first->next;
            second =second->next;
            
        }
        // first=first->next;
        // second =second->next;
        return true;
        
        
    }
};