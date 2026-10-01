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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> st;
        ListNode* temp=head->next;
        ListNode* current=head;
        while(current!= nullptr) {
             while (!st.empty() && st.top()->val < current->val) {
                st.pop();
            }
            st.push(current);
            current=current->next;
        }
        ListNode* newHead = nullptr;
         while (!st.empty()) {
            ListNode* node = st.top();
            st.pop();
             node->next = newHead;
            newHead = node;
        }
        return newHead;
       
        
        
    }
};