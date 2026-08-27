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
        vector<int>add;
        ListNode* temp=l1;
        ListNode* temp1=l2;
        int carry = 0;
        
        while(temp!=nullptr && temp1!=nullptr ){
            int x = temp->val+temp1->val+carry;
            if(x<10){
                add.push_back(x);
                carry=0;

            }
            else{
                x=x%10;
                carry=1;
                add.push_back(x);

            }
            temp=temp->next;
            temp1=temp1->next;
        }
        while(temp != nullptr){
             int x = temp->val + carry;
             if(x<10){
                add.push_back(x);
                carry=0;
            }
            else{
                x=x%10;
                carry=1;
                add.push_back(x);
            }
            temp=temp->next;

        }
        while(temp1 != nullptr){
             int x = temp1->val + carry;
             if(x<10){
                add.push_back(x);
                carry=0;
            }
            else{
                x=x%10;
                carry=1;
                add.push_back(x);
            }
            temp1=temp1->next;

        }
        if(carry == 1) {
            add.push_back(1);
        }
        ListNode* head = new ListNode(add[0]);
        ListNode* curr = head;
        for(int i = 1; i < add.size(); i++) {
            curr->next = new ListNode(add[i]);
            curr = curr->next;
        }
        return head;




        
    }
};