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
    ListNode* doubleIt(ListNode* head) {
        ListNode* temp=head;
        vector<int>ans;
        vector<int>doub;
        while(temp!=nullptr){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int n = ans.size();
        int carry =0;
        for(int j =n-1; j>=0 ;j--){
            int x =2*ans[j]+carry;
            
            doub.push_back(x%10);
            carry=x/10;
        }
        if(carry != 0) {
            doub.push_back(carry);
        }
        reverse(doub.begin(), doub.end());
        temp = head;
        int i = 0;
       if(doub.size() > ans.size()){
            ListNode* newHead = new ListNode(doub[0]);
            temp = newHead;
            for(int i= 1;i<doub.size();i++){
                temp->next = new ListNode(doub[i]);
                temp=temp->next;

            }
            return newHead;


       }
       
       temp=head;
       i=0;
       while(temp!=nullptr){

        temp->val = doub[i];
        i++;
        temp=temp->next;

       }
       return head;


    }
};