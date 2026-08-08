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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int count=0;
        int middle=0;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
            
        }
        // if(count%2!=0){
            middle =count/2;
        // }
        // else{
        //    middle= (count/2);
        // }
        ListNode* temp1=head;
        for(int i=0;i<middle;i++){
            temp1=temp1->next;
        }
        return temp1;
        
        
    }
};