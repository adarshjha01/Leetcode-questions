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
    void reorderList(ListNode* head) {
        if(head->next==nullptr) return; 

        stack<ListNode*> st;
        ListNode* temp = head;
        while(temp){
            st.push(temp);
            temp=temp->next;
        }

        temp=head;
        int size = st.size();

        for(int i=0;i<size/2;i++){
            ListNode* hold = st.top();
            st.pop();
            hold->next = temp->next;
            temp->next = hold;
            temp= temp->next->next;
        }
        temp->next = NULL;       
    }
};