/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int count1=0;
        int count2=0;
        ListNode* temp1=headA;
        ListNode* temp2=headB;

        while(temp1){
            count1++;
            temp1=temp1->next;
        }

        temp1=headA;
        while(temp2){
            count2++;
            temp2=temp2->next;
        }
        temp2=headB;

        if(count1>count2){
            count1-=count2;
            while(count1>0){
                count1--;
                temp1=temp1->next;
            }
        }

        else if(count2>count1){
            count2-=count1;
            while(count2>0){
                count2--;
                temp2=temp2->next;
            }
        }
        
        while(temp1){
            if(temp1==temp2) return temp1;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return nullptr;
    }
};