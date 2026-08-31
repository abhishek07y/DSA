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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* temp=head;
        vector<int>v;
        vector<int>ind;
        
        while(temp!=nullptr){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int n= v.size();
        if(n<=2){
            return{-1,-1};
        }
         for(int i = 1; i < n-1 ; i++) {
            if((v[i-1] < v[i] && v[i] > v[i+1]) ||
               (v[i-1] > v[i] && v[i] < v[i+1])) {
                ind.push_back(i+1);
            }
        }
        int m=ind.size();
        int mini=INT_MAX;
        if(m<2){
            return {-1,-1};
        }
        
        for(int i=1 ;i<m;i++){
            mini = min(mini, ind[i] - ind[i-1]);
        }
        int maxi = ind.back() - ind.front();  
        return {mini , maxi};
        
    }
};