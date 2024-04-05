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
    ListNode* rotateRight(ListNode* head, int k) {
        // checking for a single element or no element
        if(head==NULL || head->next==NULL) return head;
        int n=1;
        ListNode * temp=head;
        //counting the length of the linked list
        while(temp->next){
            temp=temp->next;
            n++;
        }
        k=k%n; // modifying k by taking mod 
        int count =n-k; // count to get the end of the linkded list
        temp->next=head;
        while(count){
            temp=temp->next;
            count--;
        }
            //breaking last node link and pointing to NULL
        head = temp->next;
        temp->next = NULL;
            
        return head;
}
};