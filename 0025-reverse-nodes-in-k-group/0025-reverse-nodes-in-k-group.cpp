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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        ListNode* temp=head;
        int count=0;
        int kcount=0;
        stack<ListNode*> st;
        ListNode dummy(0);
        ListNode* curr = &dummy;

        while(temp){
            count++;
            temp=temp->next;
        }

        temp=head;
        while(count>=k){
            kcount=0;
            while(kcount<k){
                st.push(temp);
                temp=temp->next;
                kcount++;
                count--;
            }

            while(!st.empty()){
                curr->next=st.top();
                st.pop();
                curr=curr->next;
            }

        }

        if(count==0) curr->next=nullptr;
        while(temp){
            curr->next=temp;
            temp=temp->next;
            curr=curr->next;
        }

        return dummy.next;
    }
};