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
        ListNode dummy(0);
        ListNode* curr= &dummy;
        int count=0;
        ListNode* temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        temp=head;
        while(count>=k){
            int kcount=k;
            stack<int> st;
            while(kcount>0){
                st.push(temp->val);
                temp=temp->next;
                kcount--;
                count--;
            }

            while(!st.empty()){
                curr->next=new ListNode(st.top());
                st.pop();
                curr=curr->next;
            }
        }

        while(temp){
            curr->next=temp;
            temp=temp->next;
            curr=curr->next;
        }
        return dummy.next;
    }
};